package Ejercicio1_Biblioteca.Chain_Organizacion;

import Ejercicio1_Biblioteca.Factory_Material.Material;

public class LabelingHandler extends Handler{
    @Override
    protected void process(Material material) {
        System.out.println("Etiquetando el material: "+material.getTipo());
    }
}
