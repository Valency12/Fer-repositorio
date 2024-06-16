package Ejercicio2_Empleados;

import Ejercicio2_Empleados.Mediator_reclutamiento.ChatMediator;
import Ejercicio2_Empleados.Mediator_reclutamiento.ChatMediatorImpl;
import Ejercicio2_Empleados.Mediator_reclutamiento.PersonaImpl;
import Ejercicio2_Empleados.Mediator_reclutamiento.Persona;
import Ejercicio2_Empleados.Observer_orientacion.Observer;
import Ejercicio2_Empleados.Observer_orientacion.Topic;
import Ejercicio2_Empleados.Observer_orientacion.TopicEmpleado;

public class Main {
    public static void main(String[] args) {
        //MEDIATOR
        System.out.println("--------------------------------------------MEDIATOR");
        ChatMediator mediator = new ChatMediatorImpl();

        Persona persona1 = new PersonaImpl(mediator, "Alice");
        Persona persona2 = new PersonaImpl(mediator, "Bob");
        Persona persona3 = new PersonaImpl(mediator, "Charlie");
        Persona persona4 = new PersonaImpl(mediator, "Diana");

        mediator.addPersona(persona1);
        mediator.addPersona(persona2);
        mediator.addPersona(persona3);
        mediator.addPersona(persona4);

        persona1.receive("Has sido aceptado para trabajar");
        persona3.send("Sera la proxima!");
        persona2.send("Has sido aceptado, empiezas mañana!");

        //OBSERVER
        System.out.println("--------------------------------------------OBSERVER");
        Topic topic = new Topic();

        Observer observer1 = new TopicEmpleado("Juan");
        Observer observer2 = new TopicEmpleado("Carlos");
        Observer observer3 = new TopicEmpleado("Karla");

        topic.registrarEmpleado(observer1);
        topic.registrarEmpleado(observer2);
        topic.registrarEmpleado(observer3);

        //preguntar que es estoooooooooo0o0o0oo0o0o0
        ((TopicEmpleado)observer1).setEncargado(topic);
        ((TopicEmpleado)observer2).setEncargado(topic);
        ((TopicEmpleado)observer3).setEncargado(topic);

        topic.setMessage("Aprendan de que va esta empresa!");
    }
}
