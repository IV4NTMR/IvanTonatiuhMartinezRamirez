
class Rectangulo : public Figura2D {

private:
    float altura;
    float base;

public:
    float getBase(){return base;}
    void setBase(float base){this -> base = base;}
    float getAltura(){return altura;}
    void setAltura(float altura){this -> altura = altura;}

    void calcular_area(){
        setArea(getBase() * getAltura());
    }
    void calcular_perimetro(){
        setPerimetro(getAltura()*2 + getBase()*2);
    }
};

