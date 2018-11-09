//
// Created by damin on 30/10/18.
//

#ifndef SERCAN2_PERSONA_H
#define SERCAN2_PERSONA_H

#include <iostream>
#include <string>
using namespace std;

class persona {
private:
    string nombre;
    string apellido;
    int edad;
    string numero;
public:
    persona(string nombre = "Ricardo", string apellido = "Gareca", int edad = 60, string numero = "943117823");
    void print() const;
    string getnombre() const {return nombre;}
    string getapellido() const {return apellido;}
    int getedad() const {return edad;}
    string getnumero() const { return numero;}
    void setnombre(string _nombre) {nombre = _nombre;}
    void setapellido(string _apellido){apellido = _apellido;}
    void setedad(int _edad) {edad = _edad;}
    void setnumero(string _numero) {numero=_numero;}

};


#endif //SERCAN2_PERSONA_H
