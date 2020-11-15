
class Triangulo : public Figura2D {

private :
    float base,altura;

public :
  //Metodos get y set para base y altura
  void setBase(float base){ this->base = base;}
  float getBase(){ return base; }
  void setAltura(float altura){ this->altura = altura;}
  float getAltura(){ return altura; }

  //Se define la forma en que se calcula el area de un triangulo
  void calcular_area(){
    setArea( getBase() * getAltura() / 2 );
  }

  //Se define la forma en que se calcula el perimetro de un triangulo
  void calcular_perimetro(){
    //Se da por entendido que es un triángulo equilatero
    setPerimetro( 3 * getBase() );
  }
};
