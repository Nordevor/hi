#include <iostream>
#include <string>
#include "persona.h"
#include "agenda.h"
using namespace std;

int main() {
    persona x;
    persona y("sergio", "cancan", 18,"122");
    agenda ag;
    cout<<ag.agregar(x)<<endl;
    agenda ag1=ag;
    cout<<ag.agregar(y)<<endl;
    cout<<ag.agregar("Gunchi","R",7,"soy un numero")<<endl;
    ag1.agregar("Patricio","Morriberon",99,"1223");
    ag.print();
    cout<<"********************************************"<<endl;
    ag1.print();
    return 0;
}