using namespace std;

class Figura2D{
protected:
  float area;
  float perimetro;

public:
  //Metodos get y set para area y perimetro
  void setArea(float area){ this->area = area;}
  float getArea(){ return area; }
  void setPerimetro(float perimetro) { this->perimetro = perimetro;}
  float getPerimetro() { return perimetro; }

  //Es necesario que existan los metodos en la clase Figura2D
  //sin embargo, la implementación de cada metodo se debe de
  //realizar en la clase hija.
  //Por ese motivo se definen como metodos virtuales
  virtual void calcular_area(){}
  virtual void calcular_perimetro(){}

};
