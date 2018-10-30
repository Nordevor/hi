#include <iostream>
#include "CRectangulo.h"

using namespace std;

int main() {
    CRectangulo R1;
    R1.setlargo(110.49);
    R1.setancho(55.25);
    cout<< "El area es " << R1.Area()<< "\n";
    cout<< "El parametro es " << R1.Perimetro();
    cout<<"\n\n\n";
    cout << "Segundo rectangulo \n";
    CRectangulo R2(20,10);
    cout << "El area es " << R2.Area() << "\n";
    cout<< "El parametro es " << R1.Perimetro();
    return 0;
}