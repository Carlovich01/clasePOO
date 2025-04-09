class Persona:
    def __init__(self, nombre="", apellido="", edad=0):
        self.__nombre = nombre 
        self.__apellido = apellido
        self.__edad = edad 

    def get_nombre(self):
        return self.__nombre
    def set_nombre(self, nombre):
        self.__nombre = nombre
    
    def get_apellido(self):
        return self.__apellido
    def set_apellido(self, apellido):
        self.__apellido = apellido

    def get_edad(self):
        return self.__edad
    def set_edad(self, edad):
        self.__edad = edad

    def apellido_mayusculas(self): 
        return self.__apellido.upper()
    def nombre_completo(self):
        return self.__nombre + " " + self.__apellido
    

if __name__=="__main__":
    #Actividad 1
    per1=Persona("Declan","Rice",26)
    per2=Persona()
    per2.set_nombre("Lautaro")
    per2.set_apellido("Martinez")
    per2.set_edad(27)
    #Actividad 2
    per1.apellido_mayusculas()
    per2.apellido_mayusculas()
    print("Persona 1:")
    print(per1.nombre_completo())
    print(per1.get_edad())
    print()
    print("Persona 2:")
    print(per2.nombre_completo())
    print(per2.get_edad())
    
