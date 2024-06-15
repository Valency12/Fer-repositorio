package Ejercicio1.Facade_Servicios;

public class BookLoanServiceImpl implements BookLoanService{
    @Override
    public void loanBook(String bookTitle, String user) {
        System.out.println("Prestando el libo '"+bookTitle+"' a "+user);
    }
}
