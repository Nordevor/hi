#include "employe.h"
#include <iostream>
using namespace std;

employe::employe(){}
employe::employe(string na, int sa, string fe)
{
    name=na;
    salario=sa;
    fecha=fe;
}
void employe::setName(string n){
    name=n;
}
void employe::setSalario(int s){
    salario=s;
}
void employe::setFecha(string f){
    fecha=f;
}
