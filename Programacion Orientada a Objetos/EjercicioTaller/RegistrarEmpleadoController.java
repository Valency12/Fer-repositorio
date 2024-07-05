package com.example.ejericiotaller;
import javafx.fxml.FXML;
import javafx.scene.control.TextField;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class RegistrarEmpleadoController {
    @FXML private TextField txtNombre;
    @FXML private TextField txtApellido;

    @FXML
    public void handlerRegistrar(){
        String nombre = txtNombre.getText();
        String apellido = txtApellido.getText();

        if (!nombre.isEmpty() && !apellido.isEmpty()){
            try(Connection conn = Database.getConnection()){
                String sql = "INSERT INTO empleado (nombrem apellido) VALUES (?, ?)";
                PreparedStatement stmt = conn.prepareStatement(sql);
                stmt.setString(1, nombre);
                stmt.setString(2, apellido);
                stmt.executeUpdate();

                System.out.println("Empleado registrado con exito!");
            }catch (SQLException e){
                e.printStackTrace();
                System.out.println("Error al registrar el empleado");
            }
        }else{
            System.out.println("Introduzca algo valido");
        }

    }
}
