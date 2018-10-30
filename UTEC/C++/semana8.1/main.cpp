#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main() {
    int C,b,a;
    int m[10][10],m1[10][10];
    int f,c,t,t1,f1,c1,t2,t3;
    cout<<"Ingrese el tamaño de la fila: ";
    cin>>f;
    cout<<"Ingrese el tamaño de la columna: ";
    cin>>c;
    t=f;
    t1=c;
    srand(time(NULL));
    for (int f=0;f<t;f++){
        for (int c=0;c<t1;c++){
            m[f][c]=rand()% (101 - 1);
            cout<<"\t"<<m[f][c];
        }
        cout<<"\n\n";
    }
    cout<<"Ingrese el tamaño de la fila: ";
    cin>>f1;
    cout<<"Ingrese el tamaño de la columna: ";
    cin>>c1;
    t2=f1;
    t3=c1;
    srand(time(NULL));
    for (int f1=0;f1<t2;f1++){
        for (int c1=0;c1<t3;c1++){
            m1[f1][c1]=rand()% (101 - 1);
            cout<<"\t"<<m1[f1][c1];
        }
        cout<<"\n\n";
    }
    if (f==c1 && c==f1||f==f1&&c==c1)
        for(int i=0; i<f; ++i) {
            for (int j = 0; j < c1; ++j) {
                for (int z = 0; z < f1; ++z) {
                    C[i][j] += m[f][c] * m1[f1][c1];
                }
            }
        }
    else
        cout<<"ERROR";
}
