package Ejercicio1_Biblioteca.Chain_Organizacion;

import Ejercicio1_Biblioteca.Factory_Material.Material;

public class ReceptionHandler extends Handler{
    @Override
    protected void process(Material material){
        System.out.println("Recibiendo el material: "+material.getTipo());
    }
}

