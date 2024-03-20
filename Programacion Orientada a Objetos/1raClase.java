//hola 
/*hola 
hola 
hola 
*/
//siempre poner las llaves
class Pokemon{
    String cadena; 
    String nombre = new String(); 
    String[] tipos = new String[2]; 
    String[] abilities = new String[2]; 
    int[] stats; 

/*metodos*/
 void atacar(){ //aqui si funciona porque es parte de la misma clase
        System.out.println("Estoy atacando :3"); 
    }
    //  public static void main(String[] args){
    //     Pokemon magnemite = new Pokemon(); 
    //     Pokemon applin = new Pokemon(); //aqui se crea el objeto y se le dice a java que tome de plantilla la clase Pokemon 

    //     magnemite.atacar(); 
    //     applin.atacar(); 
    // }
}
class Main{
     public static void main(String[] args){
        Pokemon magnemite = new Pokemon(); 
        Pokemon applin = new Pokemon(); //aqui se crea el objeto y se le dice a java que tome de plantilla la clase Pokemon 

        magnemite.atacar(); 
        applin.atacar(); 
    }
}
//Refactor o refactorizar, cambiar lo mismo en todo el archivo. 
//especificadores de visibilidad en java
d