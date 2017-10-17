#include "team.h"
#include <iostream>
using namespace std;

team::team(){}
team::team(int a, int b, string c)
{
    pelota=a;
    numJug=b;
    locVis=c;

}
void team::setPelota(int p){
    pelota=p;
}
void team::setnumJug(int nj){
    numJug=nj;
}
void team::setLocVis(string lv){
    locVis=lv;
}

void team::print(){
    if (pelota=0)
        cout<<"La pelota comenzara en el campo local"<<endl;
    else
        cout<<"La pelota comenzara en el campo visitante"<<endl;
    cout<<"los jugadores empleados para el partido seran "<<numJug<<endl;
    cout<<locVis<<endl;
}
