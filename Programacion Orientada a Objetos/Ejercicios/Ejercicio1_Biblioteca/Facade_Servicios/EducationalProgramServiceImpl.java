package Ejercicio1_Biblioteca.Facade_Servicios;

public class EducationalProgramServiceImpl implements EducationalProgramService{
    @Override
    public void enrollProgram(String programName, String user) {
        System.out.println(user+" se ha inscrito en el programa educativo '"+programName+"'");
    }
}
