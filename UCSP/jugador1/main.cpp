#include <iostream>
#include "jugador.h"
#include "team.h"
using namespace std;

int main()
{
    int x=5;

    jugador g("Guerrero", 9, "Delantero Central", 8);
    jugador p;

    p.setName("Farfan");
    p.setNumber(10);
    p.setPosition("Delantero Derecho");
    p.setAggressivity(4);

    team a(0,11,"local");

    g.print();
    cout<<"\n"<<endl;
    p.print();
    cout<<"\n"<<endl;
    a.print();
    return 0;
}
