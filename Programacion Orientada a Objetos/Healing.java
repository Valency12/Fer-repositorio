package items; //Accede la capeta items

public class Healing extends Item { //accede la clase Item
    private int numberUses;
    private int restoreAmount;

    //CONSTRUCTOR
    public Healing(int ID, String name, int numberUses, int restoreAmount) {
        super(ID, name);
        this.numberUses = numberUses;
        this.restoreAmount = restoreAmount;
    }
    //METODOS GETTERS AND SETTERS
    public int getNumberUses() {
        return numberUses;
    }

    public void setNumberUses(int numberUses) {
        this.numberUses = numberUses;
    }

    public int getRestoreAmount() {
        return restoreAmount;
    }

    public void setRestoreAmount(int restoreAmount) {
        this.restoreAmount = restoreAmount;
    }

    //Metodo
    public void restoreAmount(){
        if(numberUses != 0){ // si es diferente de 0, imprime lo siguiente
            System.out.println("Pokemon Center Sounds*");
            numberUses--; //decrementa
        }else{
            System.out.println("<No stock avaible>");
        }
    }

}
