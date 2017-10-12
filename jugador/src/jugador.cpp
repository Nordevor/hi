#include "jugador.h"
#include <iostream>
using namespace std;

jugador::jugador(){}
jugador::jugador(string w, int x, string y, int z)
{
    name=w;
    number=x;
    position=y;
    aggressivity=z;

}
void jugador::setName(string n){
    name=n;
}
void jugador::setNumber(int num){
    number=num;
}
void jugador::setPosition(string pos){
    position=pos;
}
void jugador::setAggressivity(int a){
    aggressivity=a;
}
void jugador::print(){
    cout<<name<<endl;
    cout<<number<<endl;
    cout<<position<<endl;
    if (aggressivity>=5)
        cout<<"Recomendable es que lo cambie doctor Garcia"<<endl;
    else
        cout<<"Mas sereno que una roca"<<endl;
}
