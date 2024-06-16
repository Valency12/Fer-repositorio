package Ejercicio1.Command_Services;
import Ejercicio1.Factory_Material.Material;

public class PrestamoCommand implements Command{
    private Biblioteca biblioteca;
    private Material material;

    public PrestamoCommand(Biblioteca biblioteca, Material material) {
        this.biblioteca = biblioteca;
        this.material = material;
    }

    @Override
    public void execute() {
        biblioteca.prestarMaterial(material);
    }
}
