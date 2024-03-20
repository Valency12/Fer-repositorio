public class PSU{
    private String brand; 
    private String model; 
    private double voltage; 
    private double current; 
    private String certificacion; 

    public String getModel(){
        return model; 
    }
    public String getBrand(){
        return brand; 
    }
    public double getVoltaje(){
        return voltaje; 
    }
    public double getCurrent(){
        return current; 
    }
    public String getCertificacion(){
        return certificacion; 
    }
    //SETTERS 
    public void setModel(String model){
        this.model = model; 
    }
    public void setBrand(String brand){
        this.brand = brand; 
    }
    public void setVoltaje(double voltaje){
        this.voltaje = voltaje; 
    }
    public void setCurrent(double current){
        this.current = current; 
    }
    public void setCertificacion(Sting certificacion){
        this.certificacion = certificacion; 
    }
//ArrayList<Storaje>storage
}