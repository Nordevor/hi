#include "pch.h"
#include <iostream>
using namespace std;

Estrella::Estrella(){

}
Estrella::Estrella(int ee, int cc, int ll) {
    edad = ee;
    color = cc;
    luminosidad = ll;
}
int Estrella::setEdad(int e){
    edad=e;
}
int Estrella::setColor(int c){
    color=c;
}
int Estrella::setLuminosidad(int l){
    luminosidad=l;
}
void Estrella::print(){
    int a;
    cout<<"Edad: " << edad <<endl;
    cout<<"Color: "<<  color <<endl;
    cout<<"Luminosidad: " <<luminosidad <<endl;
    cout<< "Valor a modificar en luminosidad: ";
    cin>>a;
    cout << "Luminosidad modificada: " << a <<endl;

}
bool Estrella::comparar(int comp){
    if(comp<4 && comp>0){
        comp+=10;
        return true;
    }
    else
        return false;
}