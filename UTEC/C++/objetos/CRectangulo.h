#ifndef OBJETOS_CRECTANGULO_H
#define OBJETOS_CRECTANGULO_H

class CRectangulo {
private:
    float largo;
    float ancho;
public:
    CRectangulo(){};
    CRectangulo(float _largo, float _ancho): largo (_largo), ancho( _ancho){};
    float Area();
    float Perimetro();
    void setlargo(float _largo){largo=_largo;}
    void setancho(float _ancho){ancho=_ancho;}
    float getlargo(){ return largo;}
    float getancho(){return ancho;}
};

#endif