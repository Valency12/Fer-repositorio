package Ejercicio2_Empleados.Mediator_reclutamiento;

import java.util.ArrayList;
import java.util.List;

public class ChatMediatorImpl implements ChatMediator{
    private List<Persona> persons;

    //constructor
    public ChatMediatorImpl() {
        this.persons = new ArrayList<>();
    }

    //se implementa el metodo agregar Persona
    @Override
    public void addPersona(Persona person) {
        this.persons.add(person);
    }

    //se implementa el metodo enviar el mensaje
    @Override
    public void sendMenssage(String message, Persona person) {
        for (Persona p : this.persons){
            if (p != person){
                p.receive(message);
            }
        }
    }
}
