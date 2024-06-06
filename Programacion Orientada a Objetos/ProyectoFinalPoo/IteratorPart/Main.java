package IteratorPart;
import enums.Color;
import IteratorPart.Tablero;
import java.util.Collections;
import java.util.Vector;

public class Main {
    public static void main(String[] args) {
        Tablero tablero = new Tablero();
        Ficha ficha = new Ficha(Color.RED);

        tablero.insertar(ficha, "N12");
        tablero.mover(ficha, 2);
        }
    }
