package com.example.ejericiotaller;

import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.DatePicker;
import javafx.scene.control.TextField;

import java.math.BigDecimal;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.time.LocalDate;

public class MainController {
    @FXML private Button btnRegistrarEmpleado;
    @FXML private Button btnRegistrarTarea;
    @FXML private Button btnAsignarTarea;
    @FXML private Button btnMostrarTareasEmpleado;
    @FXML private Button btnMostrarTareasCategoria;
    @FXML private TextField txtEmpleadoId;
    @FXML private TextField txtTareaId;
    @FXML private DatePicker datePicker;

    @FXML
    public void handlerRegistrarEmpleado(){
        //codigo para abrir la ventana de registrar empleado
        String nombre = txtNombre.getText();
        String apellido = txtApellido.getText();

        if (!nombre.isEmpty() && !apellido.isEmpty()) {
            try (Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/taller", "root", "tu_contraseña")) {
                String sql = "INSERT INTO empleado (nombre, apellido) VALUES (?, ?)";
                PreparedStatement stmt = conn.prepareStatement(sql);
                stmt.setString(1, nombre);
                stmt.setString(2, apellido);
                int affectedRows = stmt.executeUpdate();
                System.out.println(affectedRows + " fila(s) afectada(s)");
            } catch (SQLException e) {
                System.out.println(e.getMessage());
            }
        } else {
            System.out.println("Por favor, completa todos los campos.");
        }
    }
    @FXML
    public void handlerRegistrarTarea(){
        //codigo para abrir la ventana de registrar tarea
        String descripcion = txtDescripcion.getText();
        String categoria = choiceCategoria.getValue();
        String precio = txtPrecio.getText();

        if (!descripcion.isEmpty() && !categoria.isEmpty() && !precio.isEmpty()){
            try(Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/taller", "mafer", "mafer")){
                String sql = "INSERT INTO terea (descripcion, categoria, precio) VALUES (?, ?, ?)";
                PreparedStatement stmt = conn.prepareStatement(sql);
                stmt.setString(1, descripcion);
                stmt.setString(2, categoria);
                stmt.setBigDecimal(3, new BigDecimal(precio));
                int affectedRows = stmt.executeUpdate();
                System.out.println(affectedRows + "fila(s) afectadas");
            }catch(SQLException e){
                System.out.println(e.getMessage());
            }
        }else{
            System.out.println("Por favor, completa todos los campos");
        }
    }
    @FXML
    public void handlerAsignarTarea(){
        //Codigo para abrir la ventana de asignar tarea
        String empleadoId = txtEmpleadoId.getId();
        String tareaId = txtTareaId.getId();
        LocalDate fecha = datePicker.getValue();

        if (!empleadoId.isEmpty() && !tareaId.isEmpty() && fecha != null){
            try(Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/taller", "mafer", "mafer")){
                String sql = "INSERT INTO tarea_asignada (id_empleado, id_tarea, fecha) VALUES (?, ?, ?)";
                PreparedStatement stmt = conn.prepareStatement(sql);
                stmt.setInt(1, Integer.parseInt(empleadoId));
                stmt.setInt(1, Integer.parseInt(tareaId));
                stmt.setDate(3, java.sql.Date.valueOf(fecha));
                int affectedRows = stmt.executeUpdate();
                System.out.println(affectedRows + "fila(s) afectada");
            }catch (SQLException e){
                System.out.println(e.getMessage());
            }
        }else{
            System.out.println("Por favor, completa todos los campos.");
        }
    }
    @FXML
    public void handlerMostrarTareasEmpleado(){
//        //Codigo para abrir la ventana de mostrar tarea por empleado
//        SELECT t.descripcion, ta.fecha
//        FROM tarea_asignada ta
//        JOIN tarea t ON ta.id_tarea = t.id
//        WHERE ta.id_empleado = 1 AND ta.fecha BETWEEN '2024-07-01' AND '2024-07-31';

    }
    @FXML
    public void handlerMostrarTareasCategoria(){
//        //Codigo para abrir la ventana de mostrar tarea por categoria
//        SELECT e.nombre, e.apellido, t.descripcion, COUNT(*) as cantidad
//        FROM tarea_asignada ta
//        JOIN empleado e ON ta.id_empleado = e.id
//        JOIN tarea t ON ta.id_tarea = t.id
//        WHERE t.categoria = 'pintura'
//        GROUP BY e.id, t.descripcion
//        ORDER BY e.apellido;
    }
}