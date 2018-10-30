#include <iostream>
using namespace std;

int main(){
    float *pInt= new float[10];
    float a=0;
    float *p;
    p=new float[5];
    for (int i=0; i <5;++i){
        cout << "Ingresar numero: ";
        cin>>p[i];
        a+=p[i];
    }
    cout << a/5;
    return 0;
}