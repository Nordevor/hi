#include <iostream>

using namespace std;

int main()
{
    int anio, res;
    cout << "Ingrese el a�o:" << endl;
    cin >> anio;

    res = anio % 4;
    if (res==0)
        cout <<"Este a�o es bisiesto"<< endl;
    else
        cout <<"Este a�o no es bisiesto"<< endl;
    return 0;
}
