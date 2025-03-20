package javapoo;

public class Main {
    public static void main(String[] args) {
        // Actividad 1
        Persona per1 = new Persona("Lionel", "Messi", 37);
        Persona per2 = new Persona();

        per2.setNombre("Cristiano");
        per2.setApellido("Ronaldo");
        per2.setEdad(35);

        // Actividad 2
        per1.apellidoMayusculas();
        per2.apellidoMayusculas();

        System.out.println("Persona 1");
        System.out.println("Nombre: " + per1.nombreCompleto());
        System.out.println("Edad: " + per1.getEdad());
        System.out.println("Persona 2"); 
        System.out.println("Nombre: " + per2.nombreCompleto());
        System.out.println("Edad: " + per2.getEdad());

        // Actividad 4
        Estudiante est1 = new Estudiante();
        Estudiante est2 = new Estudiante("Lionel", "Messi", 37, "EISI10", "Ingenieria en Sistemas");

        est1.setNombre("Julian");
        est1.setApellido("Alvarez");
        est1.setEdad(25);
        est1.setMatricula("EISI19");
        est1.setCarrera("Ingenieria en Sistemas");

        // Actividad 5

        est1.apellidoMayusculas();
        est2.apellidoMayusculas();
        System.out.println("Estudiante 1");
        System.out.println("Nombre: " + est1.nombreCompleto());
        System.out.println("Matricula: " + est1.getMatricula());
        System.out.println("Carrera: " + est1.getCarrera());
        System.out.println("Estudiante 2");
        System.out.println("Nombre: " + est2.nombreCompleto());
        System.out.println("Matricula: " + est2.getMatricula());
        System.out.println("Carrera: " + est2.getCarrera());
    }
}
