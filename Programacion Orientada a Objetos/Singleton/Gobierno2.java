package items.Singleton;

//EAGER VERSION
public class Gobierno2 {

    //se crea la instancia como private static de la clase
    private static Gobierno2 instance;
    //se crean los demas atributos
    private String leader;
    private String country;
    private String description;

    //siempre el constructor
    public Gobierno2(String leader, String country, String description) {
        this.leader = leader;
        this.country = country;
        this.description = description;
    }
    //se crea el metodo para inicializar la instancia
    public static void initializeInstance(){
        if(instance == null){
            instance = new Gobierno2("Lex  Luthor", "Metropolis", "Xenophobia");
        }else{
            System.out.println("Instance already initialized");
        }
    }

    //se crean los getters
    public static Gobierno2 getInstance() {
        return instance;
    }

    public String getLeader() {
        return leader;
    }

    public String getCountry() {
        return country;
    }

    public String getDescription() {
        return description;
    }
}
