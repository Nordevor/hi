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
void suma() {
        int horizontal[2];
        int vertical[5];
        int f,c;
        int sum=0;
        int i;
        for(f=0;f<3;f++)
        {
            sum=0;
            for(c=0;c<2;c++)
            {
                sum+=ma[f][c];
            }
            vertical[f]=sum;
        }

        for(i=0;i<1;i++)
        {
            printf("%d\n",vertical[i]);
        }

        for(c=0;c<2;c++)
        {
            sum=0;
            for(int f=0;f<3;f++)
            {
                sum+=ma[f][c];
            }
            horizontal[c]=sum;
        }
        for(i=0;i<1;i++)
        {
            printf("%d\n",horizontal[i]);
        }
    }
void maximo() {
    int min = 0, max = 0;
    for (int f = 0; f < 3; f++) {
        for (int c = 0; c < 2; c++) {
            int valor = ma[f][c];
            cout << ma[f][c] << " ";
            if (valor < min) {
                min = valor;
            }
            if (valor > max) {
                max = valor;
            }
        }
        cout << endl;
    }
}


int main(){
    ingresar();
    mostrar();
    suma();
    //maximo();
}