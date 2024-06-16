package Ejercicio1_Biblioteca.Facade_Servicios;

public class StudyRoomServiceImpl implements StudyRoomService{
    @Override
    public void bookStudyRoom(String user) {
        System.out.println("Reservando una sala de estudio para "+user);
    }
}
