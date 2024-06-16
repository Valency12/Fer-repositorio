package Ejercicio1_Biblioteca.Factory_Material;

public class MaterialFactory {
    //usamos un metodo estatico para obtner la instancia de Material
    public static Material getMaterial(String tipo){
        if (tipo == null){
            return null;
        }
        if (tipo.equalsIgnoreCase("LIBROS")){
            return new Libros("Dracula", "Juan");
        }else if(tipo.equalsIgnoreCase("REVISTA")){
            return new Revista("New York Times", "7ma edicion");
        }else if(tipo.equalsIgnoreCase("PERIODICO")){
            return new Periodico("Lunes 24 de junio", "Carlos hernandez");
        }else if(tipo.equalsIgnoreCase("PELICULAS")){
            return new Peliculas("Patitos en fuga", "Comedia infantil");
        }
        return null;
    }
}
