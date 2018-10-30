#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void matriz()
{
    int matriz[10][10];
    int fila,columna,tam;
    void Mostrar();
    void Capturar();
    cout<<"\nIngrese el tamaño de la matriz==>";
    cin>>tam;
    fila=tam;
    columna=tam;
    srand(time(NULL));//numeros Aleatorios en funcion del tiempo
    for (int fila=0;fila<tam;fila++){//para desplazarse por las columnas{
        for (int columna=0;columna<tam;columna++){//para desplazarse por las filas{
            matriz[fila][columna]=rand()% (101 - 1);//Agrega numero aleatorio a la posicion ij de la matriz
            cout<<"\t"<<matriz[fila][columna];//imprime elemento de la matriz en pantalla
            // }
    cout<<"\n\n";//para dejar espacios entre filas.
        }
    }
}
int main()
{
    matriz();
}