package Ejercicio2_Empleados.Mediator_reclutamiento;
//CLASE ABSTRACT QUE REPRESENTA A UN USUARIO EN EL CHAT
public  abstract class Persona {

    protected ChatMediator mediator;
    protected String name;

    //constructor
    public Persona(ChatMediator mediator, String name) {
        this.mediator = mediator;
        this.name = name;
    }

    public abstract void send(String message);
    public abstract void receive(String message);
}
