package Ejercicio1_Biblioteca.Factory_Material;

public interface Material {
    String tipo = null;

    public default String getTipo() {
        return tipo;
    }

    public default void setTipo(String tipo) {
        tipo = tipo;
    }

    void adquirirMaterial();
}
