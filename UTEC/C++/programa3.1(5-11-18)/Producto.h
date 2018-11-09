#ifndef PROGRAMA3_1_5_11_18_PRODUCTO_H
#define PROGRAMA3_1_5_11_18_PRODUCTO_H

#include <string>

using namespace std;

class Producto {
private:
    int codigo;
    string nombre;
    float precio;
    int stock;
    string marca;
    string modelo;
public:
    Producto(){}
    Producto(int _codigo, string _nombre,float _precio, int _stock, string _marca, string _modelo):
    codigo(_codigo), nombre(_nombre), precio(_precio),stock(_stock), marca(_marca),modelo(_modelo){}
    void setCodigo (int _codigo){codigo=_codigo;}int getCodigo(){return codigo;}
    void setNombre (string _nombre){nombre=_nombre;}string getNombre(){return nombre;}
    void setPrecio (float _precio){precio=_precio;}float getPrecio(){return precio;}
    void setStock (int _stock){stock=_stock;}int getStock(){return stock;}
    void setMarca (string _marca){marca=_marca;}string getMarca(){return marca;}
    void setModelo (string _modelo){modelo=_modelo;}string getModelo(){return modelo;}
};


#endif
