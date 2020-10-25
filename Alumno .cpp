#include <iostream>
#include <string.h>
#include <C:\IvanTonatiuhMartinezRamirez\Persona.cpp>

using namespace std;



class Alumno : public Persona{
private:
    
    string registro;
    float promedio;
    float calMat;
    float calProgra;
    float calAlgebra;

public:

    string getRegistro();
    void setRegistro(string registro);
    float getPromedio();
    void setPromedio(float promedio);
    float getCalMat();
    void setCalMat(float calMat);
    float getCalProgra();
    void setCalProgra(float calProgra);
    float getCalAlgebra();
    void setCalAlgebra(float calAlgebra);

    void leer_valores();
    void calcular_promedio();
    void cambiar_status();
    void imprimir_valores();
    void obtener_promedio();
};

//Getters y Setters

string Alumno::getRegistro(){
    return registro;
}
void Alumno::setRegistro(string registro){
    this->registro = registro;
}

float Alumno::getPromedio(){
    return promedio;
}
void Alumno::setPromedio(float promedio){
    this->promedio = promedio;
}

float Alumno::getCalMat(){
    return calMat;
}
void Alumno::setCalMat(float calMat){
    this->calMat = calMat;
}

float Alumno::getCalProgra(){
    return calProgra;
}
void Alumno::setCalProgra(float calProgra){
    this->calProgra = calProgra;
}

float Alumno::getCalAlgebra(){
    return calAlgebra;
}
void Alumno::setCalAlgebra(float calAlgebra){
    this->calAlgebra = calAlgebra;
}


//Métodos.
void Alumno::leer_valores(){
    string sData;
    int iData;
    float fData;

    cout << endl << "   Ingrese los datos del alumno:" << endl;
    cout << endl << "   Nombre: ";
    cin >> sData;
    setNombre(sData);
    cout << endl << "   Edad: ";
    cin >> iData;
    setEdad(iData);
    cout << endl << "   Registro: ";
    cin >> sData;
    setRegistro(sData);
    cout << endl << "   Carrera: ";
    cin >> sData;
    setCarrera(sData);
    cout << endl << "   Calificacion de Matematicas: ";
    cin >> fData;
    setCalMat(fData);
    cout << endl << "   Calificacion de Programacion: ";
    cin >> fData;
    setCalProgra(fData);
    cout << endl << "   Calificacion de Algebra: ";
    cin >> fData;
    setCalAlgebra(fData);

    setPromedio(0);

    setStatus("Activo");
}

void Alumno::calcular_promedio(){
    char data[9];
    char buffer[9];
    cout << endl << endl << "   Ingrese el registro del alumno a promediar:";
    cin >> data;
    strcpy(buffer, getRegistro().c_str());
    if (!(strcmp(data,buffer))){
        obtener_promedio();
        cout << endl << "   El promedio del alumno es:" << getPromedio() << endl;
    }
    else{
        cout << endl << "   No existe el alumno a promediar" << endl;
    }

}

void Alumno::obtener_promedio(){
    setPromedio((getCalAlgebra() + getCalMat() + getCalProgra())/3);
}

void Alumno::imprimir_valores(){
    cout << endl << "   Los datos del alumno son los siguientes:";
    cout << endl << "   -Nombre: " << getNombre();
    cout << endl << "   -Edad: " << getEdad();
    cout << endl << "   -Registro: " << getRegistro();
    cout << endl << "   -Carrera: " << getCarrera();
    cout << endl << "   -Calificacion de Matematicas: " << getCalMat();
    cout << endl << "   -Calificacion de Algebra: " << getCalAlgebra();
    cout << endl << "   -Calificacion de Programacion: " << getCalProgra();
    cout << endl << "   -Status: " << getStatus() << endl;
}

void Alumno::cambiar_status(){
    setStatus("Baja");
}