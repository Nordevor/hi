#include <iostream>

using namespace std;

void calcPot(int x){
    while(x%2==0){
        x=x/2;}
    if (x==1){
        cout <<"es potencia de dos";
    }else
        cout << "No es potencia";
}
int main(){
    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    calcPot(numero);
    return 0;
}
