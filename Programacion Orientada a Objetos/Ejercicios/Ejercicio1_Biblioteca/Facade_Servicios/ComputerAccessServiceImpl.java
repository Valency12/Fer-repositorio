package Ejercicio1_Biblioteca.Facade_Servicios;

public class ComputerAccessServiceImpl implements ComputerAccessService{
    @Override
    public void reserveComputer(String user) {
        System.out.println("Reservando una computadora para "+user);
    }
}
