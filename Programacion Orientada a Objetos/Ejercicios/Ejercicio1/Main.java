package Ejercicio1;

import Ejercicio1.Chain_Organizacion.ClassificationHandler;
import Ejercicio1.Chain_Organizacion.LabelingHandler;
import Ejercicio1.Chain_Organizacion.ReceptionHandler;
import Ejercicio1.Facade_Servicios.LibraryServiceFacade;
import Ejercicio1.Factory_Material.Material;
import Ejercicio1.Factory_Material.MaterialFactory;
import Ejercicio1.Observer_catalogo.Catalog;
import Ejercicio1.Observer_catalogo.DigitalDisplay;
import Ejercicio1.Observer_catalogo.LibraryUser;

public class Main {
    public static void main(String[] args) {
        Material material1 = MaterialFactory.getMaterial("LIBROS");
        material1.adquirirMaterial();

        Material material2 = MaterialFactory.getMaterial("PERIODICO");
        material2.adquirirMaterial();

        ReceptionHandler receptionHandler = new ReceptionHandler();
        ClassificationHandler classificationHandler = new ClassificationHandler();
        LabelingHandler labelHandler = new LabelingHandler();

        receptionHandler.setNextHandler(classificationHandler);
        classificationHandler.setNextHandler(labelHandler);

        receptionHandler.handlerRequest(material1);
        receptionHandler.handlerRequest(material2);

        Catalog catalog = new Catalog();
        LibraryUser user1 = new LibraryUser("Alice");
        LibraryUser user2 = new LibraryUser("Pablo");
        DigitalDisplay digitalDisplay = new DigitalDisplay();

        catalog.addUsuario(user1);
        catalog.addUsuario(user2);

        catalog.addUsuario(digitalDisplay);

        catalog.addMaterial("Libro de java");
        catalog.addMaterial("Revista de ciencia");

        LibraryServiceFacade libraryServices = new LibraryServiceFacade();

        libraryServices.loanBook("El Quijote", "Alice");
        libraryServices.reserveComputer("Bob");
        libraryServices.bookStudyRoom("Charlie");
        libraryServices.enrollInProgram("Pogramacion Java", "David");
    }
}
