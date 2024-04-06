package Logistics;

public class Option {
    private int ID;
    private String name;
    private String description;
//CONSTRUCTOR
    public Option(int ID, String name, String description) {
        this.ID = ID;
        this.name = name;
        this.description = description;
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

    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }
}

