#include <iostream>

using namespace std;

class Persona{
    private:

    string nombre;
    int edad;
    string carrera;
    string status;   

    public:
    string getNombre();
    void setNombre(string nombre);
    int getEdad();
    void setEdad(int edad);
    string getCarrera();
    void setCarrera(string status);

    void setStatus(string status){ 
        this->status = status;
    }
    string getStatus() {
        return status; 
    }
};

string Persona :: getNombre(){
    return nombre;
}

void Persona :: setNombre(string nombre){
    this -> nombre = nombre;
}

int Persona :: getEdad(){
    return edad;
}

void Persona :: setEdad(int edad){ 
    this -> edad = edad;
}

string Persona :: getCarrera(){
    return carrera;
}

void Persona :: setCarrera(string carrera){
    this -> carrera = carrera;
}