#include <iostream>
using namespace std;

void uno() {
    cout<<"0   0   1"<<endl;
    cout<<"0   0   1"<<endl;
    cout<<"0   0   1"<<endl;
    cout<<"0   0   1"<<endl;
    cout<<"0   0   1"<<endl;
}
void dos() {
    cout<<"1   1   1"<<endl;
    cout<<"0   0   1"<<endl;
    cout<<"1   1   1"<<endl;
    cout<<"1   0   0"<<endl;
    cout<<"1   1   1"<<endl;
}
void tres() {
    cout<<"1   1   1"<<endl;
    cout<<"0   0   1"<<endl;
    cout<<"1   1   1"<<endl;
    cout<<"0   0   1"<<endl;
    cout<<"1   1   1"<<endl;
}
void cuatro() {
    cout<<"1   0   1"<<endl;
    cout<<"1   0   1"<<endl;
    cout<<"1   1   1"<<endl;
    cout<<"0   0   1"<<endl;
    cout<<"0   0   1"<<endl;
}
void cinco() {
    cout<<"1   1   1"<<endl;
    cout<<"1   0   0"<<endl;
    cout<<"1   1   1"<<endl;
    cout<<"0   0   1"<<endl;
    cout<<"1   1   1"<<endl;
}
void seis() {
    cout<<"1   1   1"<<endl;
    cout<<"1   0   0"<<endl;
    cout<<"1   1   1"<<endl;
    cout<<"1   0   1"<<endl;
    cout<<"1   1   1"<<endl;
}
void siete() {
    cout<<"1   1   1"<<endl;
    cout<<"0   0   1"<<endl;
    cout<<"0   0   1"<<endl;
    cout<<"0   0   1"<<endl;
    cout<<"0   0   1"<<endl;
}
void ocho() {
    cout<<"1   1   1"<<endl;
    cout<<"1   0   1"<<endl;
    cout<<"1   1   1"<<endl;
    cout<<"1   0   1"<<endl;
    cout<<"1   1   1"<<endl;
}
void nueve() {
    cout<<"1   1   1"<<endl;
    cout<<"1   0   1"<<endl;
    cout<<"1   1   1"<<endl;
    cout<<"0   0   1"<<endl;
    cout<<"1   1   1"<<endl;
}
void cero() {
    char cero[5][3]={{'*','*','*'},{'*',' ' ,'*'},{'*',' ' ,'*'},{'*',' ' ,'*'},{'*','*','*'}};
}
void matriz(){

}
int numeros(){
    int x;
    cout<<"Numero a imprimir: "<< endl;
    cin>>x;
    if (x<10)
        if(x==1)
            uno();
        if(x==2)
            dos();
        if(x==3)
            tres();
        if(x==4)
            cuatro();
        if(x==5)
            cinco();
        if(x==6)
            seis();
        if(x==7)
            siete();
        if(x==8)
            ocho();
        if(x==9)
            nueve();
        if(x==0)
            cero();

}
int matriz(){
    int a,x,b;
    a=x/10;
    b=x%10;

}
int main(){

    numeros();
}