#include <iostream>
using namespace std;

int ma[5][2];
void ingresar() {
    for(int f=0;f < 3;++f){
        cout << "Alumno: " << (f+1) << ":\n";
        for(int c=0; c<2 ; ++c){
            cout << "Dato " << (c+1) << ": ";
            cin>>ma[f][c];
        }
    }

}
void mostrar(){
    for(int f=0; f<3 ; ++f){
        for(int c=0; c<2 ; ++c) {
            cout << ma[f][c] << "\t";
        }
        cout << "\n";
    }
}

int main(){
    ingresar();
    mostrar();
}