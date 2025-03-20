package javapoo;

//Actividad 3
public class Estudiante extends Persona {
    private String matricula;
    private String carrera;

    public Estudiante() {
    }

    public Estudiante(String nombre, String apellido, int edad, String matricula, String carrera) {
        super(nombre, apellido, edad);
        this.matricula = matricula;
        this.carrera = carrera;
    }

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }

    public String getCarrera() {
        return carrera;
    }

    public void setCarrera(String carrera) {
        this.carrera = carrera;
    }
}
