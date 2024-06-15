package Ejercicio1.Factory_Material;

public class Peliculas implements Material{
    private String director;
    private String genero;

    public String getDirector() {
        return director;
    }

    public void setDirector(String director) {
        this.director = director;
    }

    public String getGenero() {
        return genero;
    }

    public void setGenero(String genero) {
        this.genero = genero;
    }

    public Peliculas(String director, String genero) {
        this.director = director;
        this.genero = genero;
    }

    @Override
    public String getTipo() {
        return null;
    }

    @Override
    public void setTipo(String tipo) {

    }

    @Override
    public void adquirirMaterial() {
        System.out.println("Soy una pelicula de genero: "+genero+" del director: "+director);
    }
}
