#include <iostream>
using namespace std;

int ma[5][4];
int i=10;
void ingresar() {
    for(int f=0;f < 5;++f){
        for(int c=0; c<4 ; ++c){
            ma[f][c]=i;
            i+=10;
        }
    }

}
void mostrar(){
    for(int f=0; f<5 ; ++f){
        for(int c=0; c<4 ; ++c) {
            cout << ma[f][c] << "\t";
        }
        cout << "\n";
    }
}

void promedio(){
    int a,x;
    int y=0;
    cout<<"Numero de la columna (1-4): "<<endl;
    cin>>a;
    for(int x=0; x<5 ;++x){
        y+=ma[x][a];
    }
    cout<<"Promedio: "<<y/5;

}
int main(){
    ingresar();
    mostrar();
    promedio();
}