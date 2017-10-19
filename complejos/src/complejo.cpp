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
    r+=x.r;
    i+=x.i;
}
void complejo::print(){
    cout<<r<<endl;
    cout<<i<<endl;
}
