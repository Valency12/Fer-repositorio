import java.util.ArrayList;
import java.util.List;
import java.util.Random;

class Libro {
    private String isbn;
    private String nombre;
    private String autor;
    private int paginas;

    // Constructor con todos los parámetros
    public Libro(String isbn, String nombre, String autor, int paginas) {
        this.isbn = isbn;
        this.nombre = nombre;
        this.autor = autor;
        this.paginas = paginas;
    }

    // Constructor para generación de ISBN
    public Libro(String nombre, String autor, int paginas) {
        this.nombre = nombre;
        this.autor = autor;
        this.paginas = paginas;
        this.isbn = GeneradorISBN.generarISBN();
    }

    // Métodos get
    public String getIsbn() {
        return isbn;
    }

    public String getNombre() {
        return nombre;
    }

    public String getAutor() {
        return autor;
    }

    public int getPaginas() {
        return paginas;
    }
}

class Biblioteca {
    private List<Libro> listaLibros;

    public Biblioteca() {
        listaLibros = new ArrayList<>();
    }

    public void agregarLibro(Libro libro) {
        listaLibros.add(libro);
    }

    public void mostrarLibros() {
        System.out.println("Libros en la biblioteca:");
        for (Libro libro : listaLibros) {
            System.out.println("ISBN: " + libro.getIsbn() + ", Nombre: " + libro.getNombre() + ", Autor: " + libro.getAutor() + ", Páginas: " + libro.getPaginas());
        }
    }
}

class GeneradorISBN {
    private static int contador = 1000; // Iniciar con un contador inicial arbitrario

    public static String generarISBN() {
        // Generar un número aleatorio de 4 dígitos
        Random random = new Random();
        int numeroAleatorio = random.nextInt(9000) + 1000;

        // Incrementar el contador para el próximo ISBN
        contador++;

        return "ISBN-" + contador + "-" + numeroAleatorio;
    }
}

public class Main {
    public static void main(String[] args) {
        // Ejemplo de uso
        Biblioteca biblioteca = new Biblioteca();

        // Agregar libros usando diferentes constructores
        biblioteca.agregarLibro(new Libro("1234567890", "El Señor de los Anillos", "J.R.R. Tolkien", 1000));
        biblioteca.agregarLibro(new Libro("Harry Potter y la piedra filosofal", "J.K. Rowling", 300));
        biblioteca.agregarLibro(new Libro("Cien años de soledad", "Gabriel García Márquez", 400));

        // Mostrar todos los libros
        biblioteca.mostrarLibros();
    }
}

