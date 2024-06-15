package Ejercicio1.Chain_Organizacion;

import Ejercicio1.Factory_Material.Material;

import java.sql.SQLOutput;

public class LabelingHandler extends Handler{
    @Override
    protected void process(Material material) {
        System.out.println("Etiquetando el material: "+material.getTipo());
    }
}
