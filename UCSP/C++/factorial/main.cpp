#include <iostream>

using namespace std;

int main()
{
    short number;
    cout << "Ingresa un numero: " << endl;
    cin >> number;
    while (number<=0){
        cout << "Entra un entero positivo"<<endl;
        cout << "Ingresa un numero: " << endl;

        cin >> number;}
    cout << "el numero factorial de " << number << " es " ;
    long long int acumulador = 1;
    for(; number > 0 ; acumulador *= number --);
    cout << acumulador << ".\n";
    return 0;
}
