#include <iostream>
#include <cmath>
using namespace std;

float suma(int a, int b){
    int x;
    cout << "Ingrese valor" << endl;
    cin >> a;
    cout << "Ingrese valor" << endl;
    cin >> b;
    x= a+b;
    cout << "La suma es: " << x << endl;
}
float resta(int a, int b){
    int x;
    cout << "Ingrese valor" << endl;
    cin >> a;
    cout << "Ingrese valor" << endl;
    cin >> b;
    x= a-b;
    cout <<"La resta es: " <<  x << endl;
}
float dividir(int a, int b){
    int x;
    cout << "Ingrese valor" << endl;
    cin >> a;
    cout << "Ingrese valor" << endl;
    cin >> b;
    if (b==0){
        cout << "0 no valido" << endl;
    }
    else{
        x= a/b;
        cout << "La dividicion es: " << x<< endl;
    }

}
float multiplicar(int a, int b){
    int x;
    cout << "Ingrese valor" << endl;
    cin >> a;
    cout << "Ingrese valor" << endl;
    cin >> b;
    x= a*b;
    cout << "La multiplicacion es: " << x << endl;
}

void menu(){
    int a;int x;int y;

    cout << "CALCULADORA" << endl;
    cout << "[1] Sumar" << endl;
    cout << "[2] Restar" << endl;
    cout << "[3] Dividir" << endl;
    cout << "[4] Multiplicar" << endl;
    cout << "[0] Salir" << endl;
    cout << "Coloque una opcion: " << endl;
    cin >> a;
    if (a==1){
        suma(x,y);
        return menu();
    }

    if (a==2){
        resta(x,y);
        return menu();
    }
    if (a==3){
        dividir(x,y);
        return menu();
    }
    if (a==4){
        multiplicar(x,y);
        return menu();
    }
    if (a==0){
        cout << "ok." << endl;
    }
    else{
        cout << "Valor no valido\n";
        return menu();
    }

}

int main() {
    menu();
    return 0;
}