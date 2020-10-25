#include <iostream>

using namespace std;

class Director : public Persona{

    public:

    void leer_valores(){
        string sData;
        int iData;
        float fData;

        cout << endl << "   Ingrese los datos del Director:" << endl;
        cout << endl << "   Nombre: ";
        cin >> sData;
        setNombre(sData);
        cout << endl << "   Edad: ";
        cin >> iData;
        setEdad(iData);
        cout << endl << "   Carrera: ";
        cin >> sData;
        setCarrera(sData);

        setStatus("Activo");
    }

    void imprimir_valores(){
        cout << endl << "   Los datos del alumno son los siguientes:";
        cout << endl << "   -Nombre: " << getNombre();
        cout << endl << "   -Edad: " << getEdad();
        cout << endl << "   -Carrera: " << getCarrera();
    }

    void eliminar_alumno(Alumno *objAlumno){
        char data[9];
        char buffer[9];
        cout << endl << endl << "   Ingrese el registro del alumno a eliminar:";
        cin >> data;
        strcpy(buffer, objAlumno->getRegistro().c_str());

        if (!(strcmp(data,buffer))){
            objAlumno->setStatus("Baja");
            cout << endl << "   Alumno dado de baja con exito" << endl;
        }
        else{
            cout << endl << "   El alumno no está registrado" << endl;
        }

    }   

    void eliminar_docente(Docente *objDocente){
        int data;
        cout << endl << endl << "   Ingrese el numero de nomina del docente:";
        cin >> data;
        if (data == objDocente->getNumNomina()){
            objDocente->setStatus("Baja");
            cout << endl << "   Docente dado de baja con exito" << endl;
        }
        else{
            cout << endl << "   El docente no esta registrado" << endl;
        }
    } 
};
