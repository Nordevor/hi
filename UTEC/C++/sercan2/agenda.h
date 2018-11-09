//
// Created by damin on 30/10/18.
//

#ifndef SERCAN2_AGENDA_H
#define SERCAN2_AGENDA_H

#include "persona.h"

class agenda {
private:
    persona *buffer;
    int tamano;
    int actual;
public:
    agenda(int n = 10);
    agenda(const agenda& x);
    void print() const;
    bool agregar(const persona &x);
    bool agregar(string nombre, string apellido, int edad, string numero);
    string buscar_por_apellido(string apellido);

};


#endif //SERCAN2_AGENDA_H
