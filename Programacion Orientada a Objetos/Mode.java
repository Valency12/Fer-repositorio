package Logistics; //accede a la carpeta de Logistics

public class Mode {
    private  int ID;
    private String name;
    private String characteristics;

    //CONSTRUCTOR
    public Mode(int ID, String name, String characteristics) {
        this.ID = ID;
        this.name = name;
        this.characteristics = characteristics;
    }
    //METODOS GETTERS AND SETTERS

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

    public String getCharacteristics() {
        return characteristics;
    }

    public void setCharacteristics(String characteristics) {
        this.characteristics = characteristics;
    }
}
