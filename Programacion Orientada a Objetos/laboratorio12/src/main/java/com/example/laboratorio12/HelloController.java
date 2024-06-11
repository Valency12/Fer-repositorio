package com.example.laboratorio12;

import javafx.fxml.FXML;
import javafx.scene.control.Label;
import javafx.scene.control.TextArea;
import javafx.stage.FileChooser;

import java.io.IOException;
import java.io.FileWriter;
import java.io.FileReader;
import java.io.File;

public class HelloController {
    @FXML
    private TextArea txtAreaTexto;
    private String ruta;

    public void initialize(){
        ruta = System.clearProperty("user.home");
    }

    @FXML
    public void btnAbrirArchivoClick(){
    File archivo;
    archivo = seleccionarArchivo();
    if (archivo == null){
        System.out.println("Archivo no encontrado!");
        return;
    }

        try (FileReader reader = new FileReader(archivo)){
            int character;

            //lee el archivo caracter por caracter
            while ((character = reader.read()) != -1) {
                // Convertir el carácter y mostrarlo
                txtAreaTexto.appendText(String.valueOf((char)character)); //lee cada letra que tiene el archivo, pero no lo
                //guarda como un string, sino un entero. codigo ASCII.
            }
        }catch (IOException e){
            e.printStackTrace();
        }
    }
    @FXML
    public void btnGuardaroCrearArchivoClick(){

    }
    @FXML
    public void btnCerrarArchivoClick(){

    }

    private void saveOrCreateFile(){
        try {
            FileWriter writer = new FileWriter(ruta);
            writer.write(txtAreaTexto.getText());
            writer.close();
        }catch (IOException e){
            e.printStackTrace();
        }
    }

    public File seleccionarArchivo(){
        FileChooser fileChooser = new FileChooser();

        //Solo permite seleccionar archivos de texto usando el selector
        fileChooser.getExtensionFilters().add(
                new FileChooser.ExtensionFilter("Text files (*.txt)", "*.txt")
        );

        //Establece el directorio inicial en algún lugar que el usuario reconozca
        fileChooser.setInitialDirectory(new File(System.getProperty("user.home")));

        //permite al usuario seleccionar el archivo
        File fileToLoad = fileChooser.showOpenDialog(null);
        return fileToLoad;
    }

}