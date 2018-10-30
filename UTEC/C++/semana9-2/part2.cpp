#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>

using namespace std;

int main() {
    fstream archivoQueLeo("paises.txt",ios::in);
    if(!archivoQueLeo.is_open()){
        cout<<"Ha ocurrido un error al abrir el archivo";
        return -1;
    }

    fstream archivoQueGrabo("pmayusculas.txt",ios::out);
    if(!archivoQueGrabo.is_open()){
        cout<<"Ha ocurrido un error al crear el archivo";
        return -1;
    }

    unsigned int nPaises=0;
    string unPais;
    while(getline(archivoQueLeo,unPais)){
        nPaises++;
        for(auto it=begin(unPais); it!=end(unPais);++it)
            *it=toupper(*it);
        archivoQueGrabo << unPais << "\n";
    }
    archivoQueGrabo<<"Numero de paises: "<< nPaises;
    archivoQueLeo.close();
    archivoQueGrabo.close();
    return 0;
}