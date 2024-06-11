module com.example.laboratorio12 {
    requires javafx.controls;
    requires javafx.fxml;


    opens com.example.laboratorio12 to javafx.fxml;
    exports com.example.laboratorio12;
}