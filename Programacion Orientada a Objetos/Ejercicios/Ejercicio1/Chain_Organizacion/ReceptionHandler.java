package Ejercicio1.Chain_Organizacion;

import Ejercicio1.Factory_Material.Material;

public class ReceptionHandler extends Handler{
    @Override
    protected void process(Material material){
        System.out.println("Recibiendo el material: "+material.getTipo());
    }
}

