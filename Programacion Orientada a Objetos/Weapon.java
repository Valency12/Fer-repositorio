package items; //extiende  la carpeta (items)

public class Weapon extends Item { //extiende al otro archivo (Item)
    private int numberShots;
    private double damage;
    private int durability;
    private String condition;

    //CONTRUCTOR

    public Weapon(int ID, String name, int numberShots, double damage, int durability) {
        super(ID, name); //se usa super() para acceder a la clase padre
        this.numberShots = numberShots;
        this.damage = damage;
        this.durability = durability;
        this.condition = "perfect";
    }
//METODO GETTERS AND SETTERS
    public int getNumberShots() {
        return numberShots;
    }

    public void setNumberShots(int numberShots) {
        this.numberShots = numberShots;
    }

    public double getDamage() {
        return damage;
    }

    public void setDamage(double damage) {
        this.damage = damage;
    }

    public void shoot(){
        System.out.println("BANG!"); //Imprime
        receiveDamage(5); //variable de inicializacion
    }
    private void receiveDamage(int dmg){
        durability -= dmg; //le resta durability = durability - dmg
        if (durability <= 0){
            condition = "broken";
        }
    }

}