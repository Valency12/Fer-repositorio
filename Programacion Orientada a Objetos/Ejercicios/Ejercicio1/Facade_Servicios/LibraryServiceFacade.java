package Ejercicio1.Facade_Servicios;

public class LibraryServiceFacade {
    private BookLoanService bookLoanService;
    private ComputerAccessService computerAccessService;
    private StudyRoomService studyRoomService;
    private EducationalProgramService educationalProgramService;

    public LibraryServiceFacade(){
        bookLoanService = new BookLoanServiceImpl();
        computerAccessService = new ComputerAccessServiceImpl();
        studyRoomService = new StudyRoomServiceImpl();
        educationalProgramService = new EducationalProgramServiceImpl();
    }
    public void loanBook(String bookTitle, String user){
        bookLoanService.loanBook(bookTitle, user);
    }
    public void reserveComputer(String user){
        computerAccessService.reserveComputer(user);
    }
    public void bookStudyRoom(String user){
        studyRoomService.bookStudyRoom(user);
    }
    public void enrollInProgram(String programName, String user){
        educationalProgramService.enrollProgram(programName, user);
    }
}
