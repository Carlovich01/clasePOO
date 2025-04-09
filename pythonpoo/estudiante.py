from persona import Persona

class Estudiante(Persona):
    def __init__(self, nombre="", apellido="", edad=0, matricula="", carrera=""):
        super().__init__(nombre, apellido, edad)
        self.__matricula = matricula
        self.__carrera = carrera

    def get_matricula(self):
        return self.__matricula
    def set_matricula(self, matricula):
        self.__matricula = matricula
    def get_carrera(self):
        return self.__carrera
    def set_carrera(self, carrera):
        self.__carrera = carrera

if __name__=="__main__":
    #Actividad 4
    est1 = Estudiante()
    est2 = Estudiante("Emiliano", "Martinez", 32, "EISI23", "Ingeniería en Sistemas")

    est1.set_nombre("Leandro")
    est1.set_apellido("Paredes")
    est1.set_edad(30)
    est1.set_matricula("EISI5")
    est1.set_carrera("Ingeniería en Sistemas")

    #Actividad 5
    est1.apellido_mayusculas()
    est2.apellido_mayusculas()

    print("Estudiante 1:")
    print(est1.nombre_completo())
    print(est1.get_matricula())
    print(est1.get_carrera())
    print()
    print("Estudiante 2:")
    print(est2.nombre_completo())
    print(est2.get_matricula())
    print(est2.get_carrera())
