package Locations; //accede a la carpeta Locations

public class Construction { //se crea la clase Cnstruction
    private int ID;
    private String characteristics;
    private int durability;
    private String condition;

//    public Construction(){ //por que se hace uno demas?
//
//    }
//CONSTRUCTOR inicializando condition
    public Construction(int ID, String characteristics, int durability) {
        this.ID = ID;
        this.characteristics = characteristics;
        this.durability = durability;
        condition = "perfect";
    }

    //Metodos getters and setters (sin la condition porque
    //se inicializa al principio
    public int getID() {
        return ID;
    }

    public void setID(int ID) {
        this.ID = ID;
    }

    public String getCharacteristics() {
        return characteristics;
    }

    public void setCharacteristics(String characteristics) {
        this.characteristics = characteristics;
    }

    public int getDurability() {
        return durability;
    }

    public void setDurability(int durability) {
        this.durability = durability;
    }

    //Metodo (si la condicion es igual a 0, imprimira que esta "roto"
    public void receiveDamage(int dmg){
        durability -= dmg;
        if(durability <= 0){
            condition = "broken";
        }
    }

}
