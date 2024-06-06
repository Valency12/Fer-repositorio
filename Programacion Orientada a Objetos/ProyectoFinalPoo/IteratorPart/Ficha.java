package IteratorPart;

import enums.Color;
import java.util.Random;

public class Ficha {
    private Casilla posicionActual;
    private Color color;

    //Constructores
    public Ficha(Color color) {
        this.color = color;
    }

    //Get y setters
    public Casilla getPosicionActual(){
        return posicionActual;
    }

    public void setPosicionActual(Casilla posicionActual) {
        this.posicionActual = posicionActual;
    }

    public Color getColor() {
        return color;
    }

    //Metodo Mover y toString
    public void mover(Casilla nuevaPosicion){
        this.posicionActual = nuevaPosicion;
    }
    @Override
    public String toString(){
        return "Ficha ["+
                "posicion actual: "+ posicionActual+", color: "+color+
                "]";
    }
}
