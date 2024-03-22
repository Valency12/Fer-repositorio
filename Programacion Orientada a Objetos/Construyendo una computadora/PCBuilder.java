public class PCBuilder{
    public static void main (String[] args){
        //System.out.println("Hola");
        CPU procesador = new CPU("AMD", "Ryzen 7", 7, 4, 16); 
        // procesador.setBrand("AMD"); 
        // procesador.setModel("Ryzen 7"); 
        // procesador.setSpeed(7);
        // procesador.setCores(4);  
        // procesador.setThreads(16); 
        System.out.println(procesador.getBrand()); 

        RAM memoria = new RAM("Kingston", "Kingston 7", 1024, 256, true); 
        // memoria.setBrand("Kingston"); 
        // memoria.setModel("Kingston 7"); 
        // memoria.setCapacity(1024); 
        // memoria.setFrecuencia(256); 
        // memoria.setRGB(true); 
        PSU fuente = new PSU("Ni idea", "Thunderbolt" 10, 45, 20, 1, "wtfxd"); 
        Storage disco = new Storage("Kingston", "Generyc", 3000.64, 500, 100, "SDD",); 
        Motherboar mommy = new Motherboar ("Streamex", "3.2.0.1");

        mommy.setCpu(procesador);
        mommy.setRam(memoria); 
        mommy.setPsu(fuente); 
        
        ArrayList<Storage>discos = new ArrayList<Storage>(); //el nombre de la coleccion tiene que ser en plural
        discos.add(disco); 
        mommy.setStorage(discos); 

        OS sistema = new OS("Windows", "XP", "1.3"); 
        mommy.getStorage().get(0).setSystem(sistema); //obejto mommy. accede al objeto Storage...quien abre la opcion get(0) en dodne se
        //dice el indice que sera, "caminito de acceso" nunca se toca la "casilla" directamente
        System.out.println("Booting..."); 
    }
}