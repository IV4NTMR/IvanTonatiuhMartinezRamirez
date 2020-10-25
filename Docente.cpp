#include <iostream>


using namespace std;

class Docente : public Persona{
    

    private:

    int numNomina;
    float salario;
    float horasTrabajadas;

    public:

    //getters y setters:
    int getNumNomina() {
    	return numNomina;
    }
    void setNumNomina(int numNomina) {
    	this->numNomina = numNomina;
    }


    float getSalario() {
    	return salario;
    }
    void setSalario(float salario) {
    	this->salario = salario;
    }


    float getHorasTrabajadas() {
    	return horasTrabajadas;
    }
    void setHorasTrabajadas(float horasTrabajadas) {
    	this->horasTrabajadas = horasTrabajadas;
    }


    //métodos:
    void leer_valores(){
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
        cout << endl << "   Carrera: ";
        cin >> sData;
        setCarrera(sData);
        cout << endl << "   Numero de Nomina: ";
        cin >> iData;
        setNumNomina(iData);
        cout << endl << "   Horas trabajadas: ";
        cin >> fData;
        setHorasTrabajadas(fData);

        setStatus("Activo");
    }

    

    void calcular_salario(){
        int data;
        cout << endl << endl << "   Ingrese el numero de nomina del docente:";
        cin >> data;
        if (data == getNumNomina()){
            obtener_salario();
            cout << endl << "   El salario del docente es:" << getSalario() << endl;
        }
        else{
            cout << endl << "   El docente no esta registrado" << endl;
        }
    }

    void obtener_salario(){
        setSalario(getHorasTrabajadas()*80);
    }

    void imprimir_valores(){
        cout << endl << "   Los datos del alumno son los siguientes:";
        cout << endl << "   -Nombre: " << getNombre();
        cout << endl << "   -Edad: " << getEdad();
        cout << endl << "   -Carrera: " << getCarrera();
        cout << endl << "   -Numero de Nomina: " << getNumNomina();
        cout << endl << "   -Horas trabajadas: " << getHorasTrabajadas();
        cout << endl << "   -Salario: " << getSalario();
        cout << endl << "   -Status: " << getStatus() << endl;
    }

    void cambiar_status(){
        setStatus("Baja");
    }
};
