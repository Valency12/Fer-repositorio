package Logistics; //accede a la carpeta Logistics
import items.*;
import Locations.Construction;
import util.GeneralUtilities;

import java.util.*;

public class Player {
    private static int nextID = 1;
    private int ID;
    private String nickname;
    private String country;
    private String status;
    private int HP;
    private ArrayList<Weapon> weapons; //
    private ArrayList<Healing> healingItems;
    private ArrayList<Material> materials;

    private Player(){

    }
}
