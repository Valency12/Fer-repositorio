package Ejercicio1;

import Ejercicio1.Chain_Organizacion.ClassificationHandler;
import Ejercicio1.Chain_Organizacion.LabelingHandler;
import Ejercicio1.Chain_Organizacion.ReceptionHandler;
import Ejercicio1.Command_Services.Biblioteca;
import Ejercicio1.Command_Services.DevolucionCommand;
import Ejercicio1.Command_Services.PrestamoCommand;
import Ejercicio1.Facade_Servicios.LibraryServiceFacade;
import Ejercicio1.Factory_Material.Material;
import Ejercicio1.Factory_Material.MaterialFactory;
import Ejercicio1.Observer_catalogo.Catalog;
import Ejercicio1.Observer_catalogo.DigitalDisplay;
import Ejercicio1.Observer_catalogo.LibraryUser;
import Ejercicio1.Command_Services.*;

public class Main {
    public static void main(String[] args) {

        System.out.println("----------------------------FACTORY");
        //FACTORY
        Material material1 = MaterialFactory.getMaterial("LIBROS");
        material1.adquirirMaterial();

        Material material2 = MaterialFactory.getMaterial("PERIODICO");
        material2.adquirirMaterial();

        System.out.println("------------------------------CHAIN OF RESPONSABILITY");

        //CHAIN OF RESPOSABILITY
        ReceptionHandler receptionHandler = new ReceptionHandler();
        ClassificationHandler classificationHandler = new ClassificationHandler();
        LabelingHandler labelHandler = new LabelingHandler();

        receptionHandler.setNextHandler(classificationHandler);
        classificationHandler.setNextHandler(labelHandler);

        receptionHandler.handlerRequest(material1);
        receptionHandler.handlerRequest(material2);

        System.out.println("-------------------------------------------OBSERVER");
        //OBSERVER
        Catalog catalog = new Catalog();
        LibraryUser user1 = new LibraryUser("Alice");
        LibraryUser user2 = new LibraryUser("Pablo");
        DigitalDisplay digitalDisplay = new DigitalDisplay();

        catalog.addUsuario(user1);
        catalog.addUsuario(user2);

        catalog.addUsuario(digitalDisplay);

        catalog.addMaterial("Libro de java");
        catalog.addMaterial("Revista de ciencia");

        System.out.println("---------------------------------------------FACADE");

        //FACADE
        LibraryServiceFacade libraryServices = new LibraryServiceFacade();

        libraryServices.loanBook("El Quijote", "Alice");
        libraryServices.reserveComputer("Bob");
        libraryServices.bookStudyRoom("Charlie");
        libraryServices.enrollInProgram("Pogramacion Java", "David");

        System.out.println("----------------------------------------COMMAND");
        //COMMAND
        Biblioteca biblioteca = new Biblioteca();
        Material libro = new Material() {
            @Override
            public void adquirirMaterial() {
                //esto no deberia de ser asi
            }
        };

        Command prestamo = new PrestamoCommand(biblioteca, libro);
        Command devolucion = new DevolucionCommand(biblioteca, libro);

        Invoker invoker = new Invoker();

        invoker.executeCommand(prestamo); //presta el material
        invoker.executeCommand(devolucion); //devuelve el material

    }
}
