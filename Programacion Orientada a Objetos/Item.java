package items; //accede a la carpeta items

public class Item {
    private int ID;
    private String name;

    public Item(int ID, String name) {
        this.ID = ID;
        this.name = name;
    }

    /*GETTER AND SETTERS*/

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
}
