package Locations; //se accede a la carpeta Locations

//Se importan los archivos o mas bien se "anclan"
//se accede primero a la carpeta y posteriormente al archivo items.Item
import items.Item;
import Logistics.Player;
import java.util.ArrayList;


public class Map { //se crea la clase (Map)
    private int ID;
    private String name;
    private float width;
    private float height;
    private String characteristics;
    private Storm storm;
    private ArrayList<Item> items; //<Item> es la clase y items es el nombre
    //crea el arraylist
    private ArrayList<Construction> constructions; //<Construction> es la clase y constructions es el nombre

    public Map(int ID, String name, float width, float height, String characteristics, Storm storm, ArrayList<Item> items) {
        this.ID = ID;
        this.name = name;
        this.width = width;
        this.height = height;
        this.characteristics = characteristics;
        this.storm = storm;
        this.items = items;
        constructions = new ArrayList<Construction>(); //se crea un nuevo objeto 'ArrayList' vacio
        //que se puede utilizar para almacenar y manipular los objetos 'Construction'
        /*Por lo tanto, esta línea de código es el punto de inicio para trabajar
        con una lista dinámica de objetos Construction en tu programa Java. Puedes agregar, eliminar, acceder y manipular los objetos
        dentro de constructions utilizando los métodos proporcionados por la clase ArrayList, como add(), remove(), get(), entre otros.*/
     }

     //METODOS GETTERS Y SETTERS
    public int getID() {
        return ID;
    }

    public void setID(int ID) {
        this.ID = ID;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public float getWidth() {
        return width;
    }

    public void setWidth(float width) {
        this.width = width;
    }

    public float getHeight() {
        return height;
    }

    public void setHeight(float height) {
        this.height = height;
    }

    public String getCharacteristics() {
        return characteristics;
    }

    public void setCharacteristics(String characteristics) {
        this.characteristics = characteristics;
    }

    public Storm getStorm() {
        return storm;
    }

    public void setStorm(Storm storm) {
        this.storm = storm;
    }

    public ArrayList<Item> getItems() {
        return items;
    }

    public void setItems(ArrayList<Item> items) {
        this.items = items;
    }
    public void addConstruction(Construction c){ //Define un metodo publico llamafo "addConstrucion"
        //toma un parametro de tipo "Construction" llamado 'c'
        constructions.add(c); //esta linea llama al metodo 'add' del objeto 'constructions'
    }
    public Construction getConstruction(int pos){
        return constructions.get(pos); //retorna al metodo get(pos)  del objeto constructions
    }
    public void advanceStorm(){
        storm.advance(); //el objeto storm accede al metodo advance()
    }
    public void respawnPlayer(int pos){
        //reallocate a player
    }
    public void respawnItem(int pos){
        //reallocate an item
    }

}
