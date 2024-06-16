package Ejercicio2_Empleados.Mediator_reclutamiento;

public interface ChatMediator {
    //en esta INTERFAZ se crean los metodos principales
    //el metodo de enviar el mensaje y agregar a quien de lo enviaremos.
    void sendMenssage(String message, Persona person);
    void addPersona(Persona person);

}
