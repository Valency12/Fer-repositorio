public class CPU{
    private String model; //los atributos tienen que ser privados
    private String brand; 
    private int speed; 
    private int threads;
    private int cores; 


//--------------------------------

//Constructors
public CPU(){
    brand = "Patito"; 
    marca = "Duck 700"; 
    speed  = 2056; 
    threads = 512; 
    cores = 128; 
}/*dos metodos pueden llamarse igual pero los paramatros son distintos
esto se llama polimorfismo*/ 
public CPU(String brand, String model, int speed, int threads, int cores){
    this.brand = brand; 
    this.model = model; 
    this.speed = speed; 
    this.threads = threads; 
    this.cores = cores; 
}



//Getters o //Mutators Accessors
public String getModel(){
    return model; 
}
public String getBrand(){
    return brand; 
}
public int getSpeed(){
    return speed; 
}
public int getThreads(){
    return threads; 
}
public int getCores(){
    return cores; 
}

//Setters
public void setModel(String model){
    this.model = model; 
    //model = input_model
}
public void setBrand(String brand){
    this.brand = brand; 
}
public void setSpeed(int speed){
    this.speed = speed; 
}
public void setThreads(int threads){
    this.threads = threads; 
}
public void setCores(int cores){
    this.cores = cores; 
}
}