package Ejercicio1.Factory_Material;

public class Periodico implements Material{
    private String fecha;
    private String autor;

    public String getFecha() {
        return fecha;
    }

    public void setFecha(String fecha) {
        this.fecha = fecha;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public Periodico(String fecha, String autor) {
        this.fecha = fecha;
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
    public void adquirirMaterial() {
        System.out.println("Soy un periodico de "+fecha+" autor: "+autor);
    }
}
