package Ejercicio2_Empleados.Observer_orientacion;

import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;

//Clase concreta que implementa 'Encargado' y gestion el estado
//del mensaje y la notificacion de los observadores.
public class Topic implements Encargado{
    private List<Observer> observers;
    private String mensaje;
    private boolean changed;

    public Topic() {
        this.observers = new ArrayList<>();
    }

    //se implementan los metodos
    @Override
    public void registrarEmpleado(Observer observer) {
        if (observer == null) throw new NullPointerException("Null Observer"); //preguntar que hace esta linea
        if(!observers.contains(observer)) observers.add(observer); //y esta tambien
    }

    //metodo que eliminara
    @Override
    public void removerEmpleado(Observer observer) {
        observers.remove(observer);
    }
    //metodo que notificara a los observadores
    @Override
    public void notificarEmpleados() {
        if (!changed) return;
        for (Observer observer : observers){
            observer.update(mensaje);
        }
        changed = false;
    }

    public void setMessage(String mensaje){
        this.mensaje = mensaje;
        this.changed = true;
        notificarEmpleados();
    }

    public String getMensaje(){
        return mensaje;
    }
}
