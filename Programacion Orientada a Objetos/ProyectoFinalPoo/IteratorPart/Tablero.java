package IteratorPart;

import enums.Color;
import enums.SquareType;

import java.util.*;


public class Tablero implements IterableCollection {
    private Vector<Casilla> casillas; // Vertices (cada nodo del grafo y el tablero entero)
    private Map<Casilla, List<Casilla>> adjList; // Lista de adyacencia (conexiones del grafo)

    public Tablero() {
        adjList = new HashMap<>();
        initTablero();
    }

    // Getters
    public Vector<Casilla> getCasillas() {
        return casillas;
    }

    // Methods
    // No se recomienda acceder las casillas por el indice del vector casillas, sino que mejor buscar por id
    private Casilla obtenerCasilla(String id) {
        for (Casilla casilla : casillas) {
            if (casilla.getId().equals(id)) return casilla;
        }
        return null;
    }

    //Metodo para añadir una casilla al grafo
    public void agregarCasilla(Casilla casilla){
        adjList.putIfAbsent(casilla, new ArrayList<>());
    }
    //metodos para añadir una arista entre dos casillas (conexiones)
    public void agregarArista(Casilla desde, Casilla hasta){
        adjList.get(desde).add(hasta);
    }

    // Conocer las conexiones que hay en un vertice especificado
    public List<Casilla> obtenerAdyacentes(Casilla casilla){
        return adjList.get(casilla);
    }

    // Separar la creacion de casillas regulares y TO_GOAL para mantener el orden del tablero
    private void crearCasillasRegulares(int cantidad) {
        casillas = new Vector<>();

        for (int i = 1; i <= cantidad; i++) {
            Casilla nuevaCasilla = new Casilla("N" + i);

            // Definir casillas safe, Mejorar condicion
            if (i == 1 || i == 9 || i == 14 || i == 22 || i == 27 || i == 35 || i == 40 || i == 48) {
                nuevaCasilla.setType(SquareType.SAFE);
            } else {
                nuevaCasilla.setType(SquareType.REGULAR);
            }

            casillas.add(nuevaCasilla);
            agregarCasilla(nuevaCasilla);
        }

        // Crear conexiones de todas las casillas regulares
        for (int i = 0; i < casillas.size() - 1; i++) {
            agregarArista(casillas.get(i), casillas.get(i + 1));
        }
        // Definir la vuelta completa del tablero
        agregarArista(casillas.get(casillas.size() - 1), casillas.get(0));
    }

    private void crearCasillasGoal(int cantidadPorColor) {
        Vector<Casilla> casillasToGoal;
        Color colorActual = null;
        int casillaRegularIndex = 0;

        casillasToGoal = new Vector<>();

        for (int i = 0; i < 4; i++) {
            switch (i){
                case 0:
                    colorActual = Color.BLUE;
                    casillaRegularIndex = 51;
                    break;
                case 1:
                    colorActual = Color.RED;
                    casillaRegularIndex = 12;
                    break;
                case 2:
                    colorActual = Color.GREEN;
                    casillaRegularIndex = 25;
                    break;
                case 3:
                    colorActual = Color.YELLOW;
                    casillaRegularIndex = 38;
                    break;
            }

            for (int j = 1; j <= cantidadPorColor ; j++) {
                Casilla nuevaCasilla = new Casilla("G" + colorActual.toString().charAt(0) + j, SquareType.TO_GOAL, colorActual);
                casillasToGoal.add(nuevaCasilla);
                agregarCasilla(nuevaCasilla);
            }

            agregarArista(obtenerCasilla("N" + casillaRegularIndex), casillasToGoal.get(cantidadPorColor * i));
        }

        for (int i = 0; i < casillasToGoal.size() - 1; i++) {
            // Si la casilla actual y la siguiente del vector de casillas hacia la meta tienen el mismo color, crear su conexion en el grafo
            // casillasToGoal.get(i + 1) significa la siguiente casilla de la iteracion actual (si casilla 0 es azul, casilla 1 es azul -> crear conexion)
            // Si casilla 4 es azul, y casilla 5 es rojo, no crear conexion
            if (casillasToGoal.get(i).getColor() == casillasToGoal.get(i + 1).getColor()) {
                agregarArista(casillasToGoal.get(i), casillasToGoal.get(i + 1));
            }
        }

        // Las casillas TO_GOAL tienen que ser accedidas tambien en un mismo unico vector de casillas, por ende incorporarlas en el tablero total
        casillas.addAll(casillasToGoal);
    }

    private void initTablero () {
        crearCasillasRegulares(52);
        crearCasillasGoal(5);
    }

    public void quitar(Ficha ficha) {
        Casilla casilla = ficha.getPosicionActual();
        casilla.setFicha(null);
        ficha.setPosicionActual(null);
    }

    public void insertar(Ficha ficha, String casillaId) {
        Casilla casilla = obtenerCasilla(casillaId);
        casilla.setFicha(ficha);
        ficha.setPosicionActual(casilla);
    }

    public void mover (Ficha ficha,int movimientos) {
        moverRec(ficha, ficha.getPosicionActual(), movimientos);
    }

    // Usar recursion para actualizar la conexion de la siguiente casilla con facilidad
    private void moverRec (Ficha ficha, Casilla casilla,int movimientos) {
        if (movimientos <= 0) {
            quitar(ficha);
            insertar(ficha, casilla.getId());
            System.out.println(ficha);
            return;
        }

        Casilla casillaSiguiente = null;
        // Ver las conexiones de cada casilla actual
        List<Casilla> siguientes = obtenerAdyacentes(casilla);

        if (siguientes.size() > 1 && siguientes.get(1).getType() == SquareType.TO_GOAL && siguientes.get(1).getColor() == ficha.getColor()) {
            // Mas de dos conexiones (segun como ha sido creado el tablero, lo maximo que puede haber es una conexion con una casilla normal y la TO_GOAL)
            casillaSiguiente = siguientes.get(1);
        } else {
            casillaSiguiente = siguientes.get(0);
        }

        moverRec(ficha, casillaSiguiente, movimientos - 1);
    }

    // Test methods
    public void mostrarTablero(){
        for (Casilla casilla : adjList.keySet()){
            System.out.print(casilla + " -> ");
            for (Casilla adyacente : adjList.get(casilla)) {
                System.out.print(adyacente + " ");
            }
            System.out.println();
        }
    }
}





















