
class Pentagono : public Figura2D {

private:
    float lado;
    float apotema;

public:
    float getLado(){return lado;}
    void setLado(float lado){this -> lado = lado;}
    float getApotema(){return apotema;}
    void setApotema(float apotema){this -> apotema = apotema;}

    void calcular_area(){
        setArea((getLado() * 5 * getApotema())/2);
    }
    void calcular_perimetro(){
        setPerimetro(getLado() * 5);
    }
};
