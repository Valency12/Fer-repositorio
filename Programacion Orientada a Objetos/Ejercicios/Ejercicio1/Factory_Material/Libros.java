package Ejercicio1.Factory_Material;

public class Libros implements Material{
    private String nombre;
    private String autor;

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public Libros(String nombre, String autor) {
        this.nombre = nombre;
        this.autor = autor;
    }

    @Override
    public String getTipo() {
        return null;
    }

    @Override
    public void setTipo(String tipo) {

    }

    @Override
    public void adquirirMaterial(){
        System.out.println("Soy un libro de nombre "+nombre+ "de "+autor);
    }
}
