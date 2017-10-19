#include "complejo.h"

complejo::complejo(){
    r=0;
    i=0;
}
complejo::complejo(int x, int y){
    r=x;
    i=y;
}
complejo complejo::suma(complejo x){
    r=r+x.r;
    i=i+x.i;
}
bool complejo::igualdad(complejo x){
    if ((x.r==r)&&(x.i==i)){
        return true;
    }
    return false;
}
void complejo::multiplicacion(int o){
    r=r*o;
    i=i*o;
}
void complejo::print(){
    cout<<r<<endl;
    cout<<i<<endl;
}
