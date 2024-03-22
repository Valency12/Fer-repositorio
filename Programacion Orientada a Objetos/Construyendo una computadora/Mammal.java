public class Mammal extends Animal{
    private int tiempoGestacion; 

    public Mammal(String nombre, String nombreCientifico, String habitat, String tiempoDieta, int tiempoGestacion){
        super(nombre, nombreCientifico, habitat, tipoDieta, longvid); 
        this.tiempoGestacion = tiempoGestacion; 
    }

    public void getTiempoGestacion(String tiempoGestacion){
        return tiempoGestacion; 
    }
    
    public void getTipoPelaje(Srtring tipoPelaje){
        return tipoPelaje; 
    }
}