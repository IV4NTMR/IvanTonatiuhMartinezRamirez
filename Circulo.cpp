#include <math.h>

class Circulo : public Figura2D {

private:
  float radio;

public:

  void setRadio(float radio){ this->radio = radio;}
  float getRadio(){ return radio; }


  void calcular_area(){
    setArea( pow(getRadio(), 2)*3.1416 );
  }
  void calcular_perimetro(){
    setPerimetro(getRadio()*2*3.1416 );
  }
};
