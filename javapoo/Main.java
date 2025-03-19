package javapoo;

public class Main {
    public static void main(String[] args) {
        Persona persona1; 
        persona1=new Persona("Lionel","Messi",37);
        persona1.apellidoMayusculas();
        System.out.println("Nombre: " + persona1.nombreCompleto());
    }
    
}
