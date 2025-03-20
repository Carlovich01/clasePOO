#include <iostream>

class Persona {
    // ----------- ATRIBUTOS ------------
    private:
        std::string nombre;
        std::string apellido;
        int edad;
    // ----------- METODOS ------------
    public:
         // Constructor
        Persona(){
        }
        
        Persona(std::string nombre, int edad) {
            this->nombre = nombre;
            this->edad = edad;
        }
         // Getters y Setters
        std::string getNombre() {
            return nombre;
        }

        void setNombre(std::string nombre) {
            this->nombre = nombre;
        }

        int getEdad() {
            return edad;
        }

        void setEdad(int edad) {
            this->edad = edad;
        }

        std::string getApellido() {
            return apellido;
        }

        void setApellido(std::string apellido) {
            this->apellido = apellido;
        }


};

int main() {
    return 0;
}