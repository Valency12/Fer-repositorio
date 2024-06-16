package Ejercicio2_Empleados.Observer_orientacion;
//esta clase es la encargada de creaar los metodos, agregar
//remover, y notificar a los usuarios
public interface Encargado {
    void registrarEmpleado(Observer observer);
    void removerEmpleado(Observer observer);
    void notificarEmpleados();
}
