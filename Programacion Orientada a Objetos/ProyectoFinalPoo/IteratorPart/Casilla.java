package IteratorPart;

import enums.Color;
import enums.SquareType;

public class Casilla {
    private Ficha ficha;
    private SquareType type;
    private Color color;
    private String id;

   //Constructores
   public Casilla(String id) {
       this.id = id;
   }

    public Casilla(String id, SquareType type) {
        this.id = id;
        this.type = type;
    }

    public Casilla(String id, SquareType type, Color color) {
        this.id = id;
        this.type = type;
        this.color = color;
    }

    // Getters y Setters
    public void setType(SquareType type) {
        this.type = type;
    }

    public String getId() {
        return id;
    }

    public SquareType getType() {
        return type;
    }

    public Ficha getFicha() {
        return ficha;
    }

    public void setFicha(Ficha ficha) {
        this.ficha = ficha;
    }

    public Color getColor() {
        return color;
    }

    public void setColor(Color color) {
        this.color = color;
    }

    //Metodo toString
    @Override
    public String toString() {
        return "[" + id + "] Type: " + type;
    }
}
