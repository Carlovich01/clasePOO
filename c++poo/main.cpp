#include <iostream>

class Persona
{
    // ----------- ATRIBUTOS ------------
private:
    std::string nombre;
    std::string apellido;
    int edad;
    // ----------- METODOS ------------
public:
    // Constructor
    Persona() = default;
    
    // Lista de Iniciación (Initializer List) forma recomendada de lenguaje c++, la otra forma es con this
    Persona(std::string nombre, std::string apellido, int edad) : nombre(nombre), apellido(apellido), edad(edad) {}
    
    // Getters y Setters
    std::string getNombre()
    {
        return nombre;
    }

    void setNombre(std::string nombre)
    {
        this->nombre = nombre;
    }

    std::string getApellido()
    {
        return apellido;
    }

    void setApellido(std::string apellido)
    {
        this->apellido = apellido;
    }

    int getEdad()
    {
        return edad;
    }

    void setEdad(int edad)
    {
        this->edad = edad;
    }

    void apellidoMayusculas()
    {
        for (int i = 0; i < apellido.length(); i++)
        {
            apellido[i] = toupper(apellido[i]);
        }
    }

    std::string nombreCompleto()
    {
        return nombre + " " + apellido;
    }
};

//Actividad 3
class Estudiante : public Persona
{
private:
    std::string matricula;
    std::string carrera;

public:
    Estudiante() = default;

    Estudiante(std::string nombre, std::string apellido, int edad, std::string matricula, std::string carrera) : Persona(nombre, apellido, edad), matricula(matricula), carrera(carrera) {}

    std::string getMatricula()
    {
        return matricula;
    }

    void setMatricula(std::string matricula)
    {
        this->matricula = matricula;
    }

    std::string getCarrera()
    {
        return carrera;
    }

    void setCarrera(std::string carrera)
    {
        this->carrera = carrera;
    }
};

int main()
{
    //Actividad 1
    Persona per1("Juan", "Perez", 20);
    Persona per2;

    per2.setNombre("Maria");
    per2.setApellido("Lopez");
    per2.setEdad(25);

    //Actividad 2
    per1.apellidoMayusculas();
    per2.apellidoMayusculas();

    std::cout << "Persona 1" << std::endl;
    std::cout << per1.nombreCompleto() << std::endl;
    std::cout << per1.getEdad() << std::endl;
    std::cout << "Persona 2" << std::endl;
    std::cout << per2.nombreCompleto() << std::endl;
    std::cout << per2.getEdad() << std::endl;

    //Actividad 4
    Estudiante est1;
    Estudiante est2("Pedro", "Gomez", 22, "EISI4", "Ing. Sistemas");

    est1.setNombre("Ana");
    est1.setApellido("Torres");
    est1.setEdad(23);
    est1.setMatricula("EISI5");
    est1.setCarrera("Ing. Sistemas");

    //Actividad 5
    est2.apellidoMayusculas();
    est1.apellidoMayusculas();

    std::cout << "Estudiante 1" << std::endl;
    std::cout << est1.nombreCompleto() << std::endl;
    std::cout << est1.getMatricula() << std::endl;
    std::cout << est1.getCarrera() << std::endl;
    std::cout << "Estudiante 2" << std::endl;
    std::cout << est2.nombreCompleto() << std::endl;
    std::cout << est2.getMatricula() << std::endl;
    std::cout << est2.getCarrera() << std::endl;
    return 0;
}