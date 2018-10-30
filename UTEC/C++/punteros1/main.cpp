#include <iostream>
using namespace std;

int ejercicio1() {
    float f=10.5;
    float *pf=&f;
    cout << "Valor de f: "<<f<<"\n";
    cout << "Valor de f: "<<*pf<<"\n";
    *pf=100+*pf;
    cout << "Valor de f: "<<f<<"\n";
    *pf=*pf*2;
    cout << "Valor de f: "<<f<<"\n";
    return 0;
}
int ejercicio2(){
    float g=4500.99;
    float *p=nullptr;
    cout << "p: "<<p<<"\n";
    p=&g;
    cout << "p: "<<p<<"\n";
    cout << "p: "<<&p<<"\n";
    *p=*p+2000;
    *p=*p*2;
    cout << "g: "<<g<<"\n";
    return 0;
}
int ejercicio3(){
    float *pAncho= nullptr, *pLargo= nullptr;
    pAncho=new float;
    pLargo=new float;
    cout << "Largo: ";
    cin >>*pLargo;
    cout << "Ancho: ";
    cin >>*pAncho;

    cout<<"El Area es: "<<*pLargo * *pAncho<<"\n";
    cout<<"El Perimetro es: "<<2* *pLargo + 2* *pAncho;
    delete pAncho;
    delete pLargo;
    pAncho= nullptr;
    pLargo= nullptr;
    return 0;
}
int main(){
    ejercicio1();
    cout<<"\n";
    ejercicio2();
    cout<<"\n";
    ejercicio3();
}