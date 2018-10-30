#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>
using namespace std;

int main() {
    fstream miarchivo("oracion.txt",ios::out);
    string oracion;
    do{
        cout << "Oracion: ";
        getline(cin, oracion);
        if(oracion.size()!=0)
            miarchivo << oracion << "\n";
    }while(oracion.size()!=0);
    miarchivo.close();

    fstream archivoQueLeo("oracion.txt",ios::in);
    if(!archivoQueLeo.is_open()){
        cout<<"Ha ocurrido un error al abrir el archivo";
        return -1;
    }

    fstream archivoQueGrabo("oracion.txt",ios::out);
    if(!archivoQueGrabo.is_open()){
        cout<<"Ha ocurrido un error al crear el archivo";
        return -1;
    }

    unsigned int naOracion=0;
    string unaOracion;
    while(getline(archivoQueLeo,unaOracion)){
        naOracion++;
        for(auto it=begin(unaOracion); it!=end(unaOracion);++it)
        archivoQueGrabo << unaOracion << "\n";
    }
    archivoQueGrabo<<"Numero de paises: "<< naOracion;
    archivoQueLeo.close();
    archivoQueGrabo.close();
    return 0;
}