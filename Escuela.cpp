#include <iostream>
#include <C:\IvanTonatiuhMartinezRamirez\Alumno .cpp>
#include <C:\IvanTonatiuhMartinezRamirez\Docente.cpp>
#include <C:\IvanTonatiuhMartinezRamirez\Director.cpp>

using namespace std;
class Escuela{

    private:

    Alumno objAlumno;
    Docente objDocente;
    Director objDirector;

    public:

    void menu_principal(){
        int opcion;
        bool exit = NULL;
        bool validOp = NULL;

        do{
            do{
                cout << "SISTEMA ESCOLAR" 
                << endl;
                cout << endl << "*Menu Principal*";
                cout << endl << "   1.- Alumno";
                cout << endl << "   2.- Docente";
                cout << endl << "   3.- Director";
                cout << endl << "   4.- Salir" << endl;
                cout << endl << "Seleccione una opcion:";
                cin >> opcion;
                cout << endl;

                if (opcion>4 || opcion<1){
                    cout << endl << "ERROR: La opcion ingresada no existe, intente de nuevo." << endl;
                    validOp=false;
                }
                else{
                    validOp=true;
                }
            } while (validOp==false);

            switch (opcion){
                case 1:
                    menu_alumno();
                break;

                case 2:
                    menu_docente();
                break;
                
                case 3:
                    menu_director();
                break;

                case 4:
                    cout << endl << "Saliendo del programa." << endl;
                    exit = true;
                break;
            }
        } while (exit == false);

    }


    void menu_alumno(){
        int OpAl;
        bool validOpAl = NULL;

        do{
            do{
                cout << endl << "   ~Menu de Alumno~";
                cout << endl << "       1.-Capturar datos del alumno";
                cout << endl << "       2.-Cacular promedio";
                cout << endl << "       3.-Mostrar datos del alumno";
                cout << endl << "       4.-Regresar al menu principal";
                cout << endl << endl << "   Seleccione una opcion: ";
                cin >> OpAl;
                cout << endl;

                if (OpAl > 1 && OpAl < 5){
                    validOpAl = true;
                }
                else{
                    cout << endl << "ERROR: La opcion ingresada no exite, intene de nuevo." << endl;
                    validOpAl = false;
                }
            } while (validOpAl=false);

            switch (OpAl){
                case 1:
                    objAlumno.leer_valores();
                break;

                case 2:
                    objAlumno.calcular_promedio();
                break;

                case 3:
                    objAlumno.imprimir_valores();
                break;

                case 4:
                    cout << endl << "Saliendo al menu principal..." << endl;
                break;
            }
        } while (OpAl != 4);
    }

    void menu_docente(){
        int OpDo;
        bool validOpAl = NULL;

        do{
            do{
                cout << endl << "   ~Menu de Docente~";
                cout << endl << "       1.-Capturar datos del docente";
                cout << endl << "       2.-Cacular salario";
                cout << endl << "       3.-Mostrar datos del docente";
                cout << endl << "       4.-Regresar al menu principal";
                cout << endl << endl << "   Seleccione una opcion: ";
                cin >> OpDo;
                cout << endl;

                if (OpDo < 1 || OpDo > 4){
                    cout << endl << "ERROR: La opcion ingresada no exite, intene de nuevo." << endl;
                    validOpAl = false;
                }
                else{
                    validOpAl = true;
                }
            } while (validOpAl=false);

            switch (OpDo){
                case 1:
                    objDocente.leer_valores();
                break;

                case 2:
                    objDocente.calcular_salario();
                break;

                case 3:
                    objDocente.imprimir_valores();
                break;

                case 4:
                    cout << endl << "Saliendo al menu principal..." << endl;
                break;
            }
        } while (OpDo != 4);
    }

    void menu_director(){
        int OpDi;
        bool validOpAl = NULL;

        do{
            do{
                cout << endl << "   ~Menu de Director~";
                cout << endl << "       1.-Capturar datos del director";
                cout << endl << "       2.-Mostrar datos del director";
                cout << endl << "       3.-Dar de baja al Alumno";
                cout << endl << "       4.-Dar de baja al docente";
                cout << endl << "       5.-Regresar al menu principal";
                cout << endl << endl << "   Seleccione una opcion: ";
                cin >> OpDi;
                cout << endl;

                if (OpDi < 1 || OpDi > 5){
                    cout << endl << "ERROR: La opcion ingresada no exite, intene de nuevo." << endl;
                    validOpAl = false;
                }
                else{
                    validOpAl = true;
                }
            } while (validOpAl=false);

            switch (OpDi){
                case 1:
                    objDirector.leer_valores();
                break;

                case 2:
                    objDirector.imprimir_valores();
                break;

                case 3:
                    objDirector.eliminar_alumno(&objAlumno);
                break;

                case 4:
                    objDirector.eliminar_docente(&objDocente);
                break;

                case 5:
                    cout << endl << "Saliendo al menu principal..." << endl;
                break;

            }
        } while (OpDi != 5);
    }

    
};