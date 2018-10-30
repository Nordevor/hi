#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int numero(){
    int num;
    do{num=rand() % (9);
    }while(num<1);
    return num;
}

int main() {
    fstream miarchivo("matriz.txt",ios::out);
    int filas,columna, **matriz;
    cout << "Filas: "; cin>>filas;
    cout << "Columnas: ";cin>>columna;
    matriz=new int*[filas];
    for (int i=0; i<columna;i++){
        matriz[i]=new int[columna];
    }
    for (int f=0;f<filas;f++){
        for (int c=0;c<columna;c++) {
            matriz[f][c]=numero();
            miarchivo<<"\t" << matriz[f][c];
        }
        miarchivo<<"\n";
    }
    miarchivo.close();
    return 0;
}
