package Ejercicio1.Observer_catalogo;
import java.util.ArrayList;
import java.util.List;

public class Catalog implements Subject{
    private List<Observer> observers;
    private List<String> materials;

    public Catalog(){
        observers = new ArrayList<>();
        materials = new ArrayList<>();
    }

    @Override
    public void addUsuario(Observer o) {
        observers.add(o);
    }

    @Override
    public void removeUsuario(Observer o) {
        observers.remove(o);
    }

    @Override
    public void notificarUsuario() {
        for (Observer observer : observers){
            observer.update(materials.get(materials.size()-1));
        }
    }
    public void addMaterial(String material){
        materials.add(material);
        notificarUsuario();
    }
    public List<String> getMaterials(){
        return materials;
    }

}
