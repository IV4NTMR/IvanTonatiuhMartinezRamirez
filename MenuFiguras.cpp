#include <iostream>

using namespace std;

class MenuFiguras
{
public:
  Figura2D *ptrObj;
  Cuadrado objCuadrado;
  Triangulo objTriangulo;
  Rectangulo objRectangulo;
  Circulo objCirculo;
  Pentagono objPentagono;
  
public:
  void menu();
  void calcular_datos();
};

//En este metodo, el apuntador ptrObj se comporta de forma polimorfica
//dependiende del objeto apuntado (Puede ser el objeto cuadrado o el
//objeto triangulo) responde a los metodos calcular_area y calcular_perimetro

void MenuFiguras::calcular_datos()
{
  ptrObj->calcular_area();
  ptrObj->calcular_perimetro();

  cout << endl;
  cout << "Area :" << ptrObj->getArea() << endl;
  cout << "Perimetro :" << ptrObj->getPerimetro() << endl;
  cout << endl;
}

void MenuFiguras::menu()
{
  int opcion;
  float lado, base, altura, radio, apotema;
  do
  {
    cout << "Figuras geometricas en dos dimensiones" << endl;
    cout << "1. Cuadrado " << endl;
    cout << "2. Triangulo" << endl;
    cout << "3. Circulo" << endl;
    cout << "4. Rectangulo" << endl;
    cout << "5. Pentagono" << endl;
    cout << "6. Salir" << endl;
    cout << "Elige una opcion " << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
      cout << "Ingresa el Lado del cuadrado :";
      cin >> lado;
      objCuadrado.setLado(lado);
      ptrObj = &objCuadrado;
      calcular_datos();
      break;

    case 2:
      cout << "Ingresa la base del triangulo :";
      cin >> base;
      cout << "Ingresa la altura del triangulo :";
      cin >> altura;
      objTriangulo.setBase(base);
      objTriangulo.setAltura(altura);
      ptrObj = &objTriangulo;
      calcular_datos();
      break;

    case 3:
      cout << "Ingrese el radio del círculo :";
      cin >> radio;
      objCirculo.setRadio(radio);
      ptrObj = &objCirculo;
      calcular_datos();
      break;

    case 4:
      //float base, altura;
      cout << "Ingresa la base del rectangulo :";
      cin >> base;
      cout << "Ingresa la altura del rectangulo :";
      cin >> altura;
      objRectangulo.setBase(base);
      objRectangulo.setAltura(altura);
      ptrObj = &objRectangulo;
      calcular_datos();
      break;

    case 5:
      cout << "Ingresa la medida de un lado del pentagono :";
      cin >> lado;
      cout << "Ingresa el apotema del pentagono :";
      cin >> apotema;
      objPentagono.setLado(lado);
      objPentagono.setApotema(apotema);
      ptrObj = &objPentagono;
      calcular_datos();
      break;
    default:
      cout << "Opcion No valida" << endl;
    }
  } while (opcion != 6);
}
