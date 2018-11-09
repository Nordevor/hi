//
// Created by damin on 30/10/18.
//

#include "persona.h"
persona::persona(string nombre, string apellido, int edad, string numero) : nombre(nombre), apellido(apellido), edad(edad) , numero(numero){}

void persona::print() const {
    cout << nombre << " " << apellido << " " << edad <<" "<<numero<< endl;
}

