package Ejercicio1.Observer_catalogo;

public class LibraryUser implements Observer{
    private String name;

    public LibraryUser(String name){
        this.name = name;
    }

    @Override
    public void update(String material) {
        System.out.println(name+" ha sido notificado sobre un nuevo material: "+material);
    }
}
