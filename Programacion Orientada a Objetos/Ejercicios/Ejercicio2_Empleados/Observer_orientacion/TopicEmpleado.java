package Ejercicio2_Empleados.Observer_orientacion;

import java.sql.SQLOutput;

public class TopicEmpleado implements Observer{
    private String name;
    private Encargado topic;

    public TopicEmpleado(String name) {
        this.name = name;
    }

    @Override
    public void update(String mesaje) {
        System.out.println(name+ " recibio: "+ mesaje);
    }
    public void setEncargado(Encargado topic){
        this.topic = topic;
    }
}
