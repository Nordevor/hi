#include <iostream>

using namespace std;

int main()
{
    int anio, res;
    cout << "Ingrese el año:" << endl;
    cin >> anio;

    res = anio % 4;
    if (res==0)
        cout <<"Este año es bisiesto"<< endl;
    else
        cout <<"Este año no es bisiesto"<< endl;
    return 0;
}
