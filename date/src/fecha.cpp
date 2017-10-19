#include "fecha.h"
#include <iostream>
using namespace std;

fecha::fecha(){

}

fecha::fecha(int dd, string mm, int yy)
{
    day=dd;
    month=mm;
    year=yy;
}

void fecha::setDay(int d){
    day=d;
}
void fecha::setMonth(string m){
    month=m;
}
void fecha::setYear(int y){
    year=y;

bool fecha::setBisiesto()
}
void fecha::print(){
    cout<<day<<endl;
    cout<<month<<endl;
    cout<<year<<endl;
}
bool fecha::aniobiciesto(int anio){
    if(anio % 4 == 0){
        if (anio%100 != 0 || anio % 400 == 0){
            return true;
        }
    }
    else
            return false;
}
