package Ejercicio1.Chain_Organizacion;

import Ejercicio1.Factory_Material.Material;

public class ClassificationHandler extends Handler{
    @Override
    protected void process(Material material) {
        System.out.println("Clasificando el material: "+material.getTipo());
    }
}
