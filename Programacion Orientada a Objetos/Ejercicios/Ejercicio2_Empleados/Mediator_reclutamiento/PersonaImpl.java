package Ejercicio2_Empleados.Mediator_reclutamiento;

public class PersonaImpl extends Persona{
    //constructor
    public PersonaImpl(ChatMediator mediator, String name) {
        super(mediator, name);
    }
    //se implementan los metodos enviar el mensaje
    @Override
    public void send(String message) {
        System.out.println(this.name+" envia: "+message);
        mediator.sendMenssage(message, this);
    }
    //se implementa el metodo recibir el mensaje

    @Override
    public void receive(String message) {
        System.out.println(this.name+" recibe: "+message);
    }
}
