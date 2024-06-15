package Ejercicio1.Observer_catalogo;

public class DigitalDisplay implements Observer{
    @Override
    public void update(String material) {
        System.out.println("Pantalla digital muestra nuevo material disponible: "+material);
    }
}
