//
// Created by damin on 30/10/18.
//

#include "agenda.h"
#include "persona.h"
agenda::agenda(int n) : tamano(n), actual(0), buffer(new persona[n]){}

agenda::agenda(const agenda &x) : tamano(x.tamano), actual(x.actual), buffer(new persona[x.tamano]){
    for(int i = 0; i < actual; ++i)
        buffer[i] = x.buffer[i];
}

bool agenda::agregar(const persona &x) {
    if(actual < tamano){
        buffer[actual++] = x;
        return true;
    }
    return false;
}



bool agenda::agregar(string nombre, string apellido, int edad,string numero) {
    if(actual < tamano){
        buffer[actual].setnombre(nombre);
        buffer[actual].setapellido(apellido);
        buffer[actual].setedad(edad);
        buffer[actual++].setnumero(numero);
        return true;
    }
    return false;
}

void agenda::print() const {
    for(int i = 0; i < actual; ++i)
        buffer[i].print();
}
string agenda::buscar_por_apellido(string apellido) {
       for(int i=0;i<actual;++i){
           if(apellido=buffer[i].setapellido())
               return "se encontro el apellido";
       }

}