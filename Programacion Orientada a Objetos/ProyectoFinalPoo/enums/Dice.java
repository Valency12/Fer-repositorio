package enums;

import java.util.Random;
public class Dice {
    private static Dice instance;
    private Dice(){

    }
    public static Dice getInstance(){
        if(instance == null){
            instance = new Dice();
        }
        return instance;
    }
    public int roll(){
        Random rand = new Random();
        return(rand.nextInt(6)+1);
    }
}
