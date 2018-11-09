 #include <iostream>
#include "Producto.h"
using namespace std;

int main() {
    Producto P1;
    P1.setCodigo(203);
    P1.setNombre("Gilberto");
    P1.setPrecio(250);
    P1.setStock(40);
    P1.setMarca("Nokia");
    P1.setModelo("3210");

    Producto P2(119,"Machebi", 450,69,"Motorola","e5");

    cout<<"Producto: \nCodigo: " << P1.getCodigo()<<"\nNombre:" << P1.getNombre()<<"\nPrecio: "<<P1.getPrecio()<<"\nStock: "<<P1.getStock()<<"\nMarca: "<<P1.getMarca()<<"\nModelo: "<<P1.getModelo()<<endl;
    cout<<"Producto: \nCodigo: " << P2.getCodigo()<<"\nNombre:" << P2.getNombre()<<"\nPrecio: "<<P2.getPrecio()<<"\nStock: "<<P2.getStock()<<"\nMarca: "<<P2.getMarca()<<"\nModelo: "<<P2.getModelo()<<endl;

    return 0;
}