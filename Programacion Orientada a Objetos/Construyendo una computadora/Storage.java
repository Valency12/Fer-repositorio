public class Storage{
    private String model; 
    private String brand; 
    private int speed; 
    private int readSpd; 
    private int writeSpd; 
    private OS system; //falto este
    private String type; 
    private String capacity; 

    public String getModel(){
    return model; 
    }
    public String getBrand(){
        return brand; 
    }
    public int getCapacity(){
        return.capacity; 
    }
    public int getSpeed(){
        return.speed; 
    }
    public String getType(){
        retunr.type; 
    }
    public int getReadSpd(){
        return.readSpd; 
    }
    public int getWriteSpd(){
        return.writeSpdSpd; 
    }

    public 
    //setters
     public void setModel(String model){
        this.model = model; 
    }
    public void setBrand(String brand){
        this.brand = brand; 
    }
    public void setSpeed(int speed){
        this.speed = speed; 
    }
    public void setType(String type){
        this.type = type; 
    }
    public void setCapacity(String capacity){
        this.capacity = capacity; 
    }
    public void setWriteSpd(int writeSpd){
        this.writeSpd = writeSpd; 
    }
    public void setReadSpd(int readSpd){
        this.readSpd = readSpd; 
    }
}