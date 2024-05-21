package items.Singleton;

//LAZY VERSION
public class Gobierno1 {
    //se crea la instancia tipo private static
    private static Gobierno1 instance;

    //creamos los atributos
    private String leader;
    private String country;
    private String description;

    //creamos nuestro constructor
    public Gobierno1(String leader, String country, String description) {
        this.leader = leader;
        this.country = country;
        this.description = description;
    }
    //se crea el metodo de la instancia GET (este es como para obtener)
    public static Gobierno1 getInstance(){
        if(instance == null){
            instance = new Gobierno1("Nayib Bukele", "El salvador", "duros");
        }
        return instance;
    }

    //luego se crean los getters
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
