package Ejercicio1_Biblioteca.Observer_catalogo;

public interface Subject {
    void addUsuario(Observer o);
    void removeUsuario(Observer o);
    void notificarUsuario();
}
