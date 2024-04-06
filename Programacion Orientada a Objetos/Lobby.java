package Logistics; //accede a la carpeta Logistics

//por medio de la carpeta items se importan todos los archivos en ella
import items.Healing;
import items.Item;
import items.Material;
import items.Weapon;

import java.util.ArrayList;

public class Lobby {
    private int ID;
    private ArrayList<Player> players; //clase <Player> y el nombre players
    private ArrayList<Option> options; //clase <Option> y el nombre options

    public Lobby(int ID, ArrayList<Option> options){
        this.ID = ID;
        this.options = options;
        players = new ArrayList<Player>();
    }

    //METODOS GETTERS AND SETTERS
    public int getID() {
        return ID;
    }

    public void setID(int ID) {
        this.ID = ID;
    }

    public ArrayList<Player> getPlayers() {
        return players;
    }

    public void setPlayers(ArrayList<Player> players) {
        this.players = players;
    }

    public ArrayList<Option> getOptions() {
        return options;
    }

    public void setOptions(ArrayList<Option> options) {
        this.options = options;
    }
    //METODOS APARTE
    public void addPlayer(Player p){
        players.add(p); //EL objeto players accede al metodo add(p)
    }
    public Player getPlayer(int pos){
        return players.get(pos); //retorna el objeto player que accede al metodo get(pos) pos como variable pasada
    }
    public void menu(){
        //show options
    }
    public Option getOption(int pos){
        return options.get(pos); //retorna el objeto options que accede al metodo get(pos) pos la variable
    }
}
