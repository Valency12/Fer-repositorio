package Ejercicio1_Biblioteca.Factory_Material;

public class Revista implements Material{
    private String nombre;
    private String edicion;

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getEdicion() {
        return edicion;
    }

    public void setEdicion(String edicion) {
        this.edicion = edicion;
    }

    public Revista(String nombre, String edicion) {
        this.nombre = nombre;
        this.edicion = edicion;
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
        System.out.println("Soy una revista mi nombre es "+nombre+"soy la edicion "+edicion);
    }
}
