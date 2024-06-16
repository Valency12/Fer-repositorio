package Ejercicio1.Command_Services;
import Ejercicio1.Factory_Material.Material;
public class DevolucionCommand implements Command{
    private Biblioteca biblioteca;
    private Material material;

    public DevolucionCommand(Biblioteca biblioteca, Material material) {
        this.biblioteca = biblioteca;
        this.material = material;
    }

    @Override
    public void execute() {
        biblioteca.devolverMaterial(material);
    }
}
