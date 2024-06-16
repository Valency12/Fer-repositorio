package Ejercicio1_Biblioteca.Command_Services;

import Ejercicio1_Biblioteca.Factory_Material.Material;
import java.util.List;
import java.util.ArrayList;

public class Biblioteca {
    private List<Material> materialesPrestados = new ArrayList<>();

    public void prestarMaterial(Material material) {
        materialesPrestados.add(material);
        System.out.println("Material prestador: "+material.getTipo());
    }

    public void devolverMaterial(Material material) {
        materialesPrestados.remove(material);
        System.out.println("Material devuelto: "+material.getTipo());
    }
}
