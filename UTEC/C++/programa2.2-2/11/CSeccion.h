
#ifndef EJEMPLO1_ARRAYDEOBJETOSCONDOSCLASES_CSECCION_H
#define EJEMPLO1_ARRAYDEOBJETOSCONDOSCLASES_CSECCION_H

#include "CAlumno.h"

class CSeccion
{
private:
    int n;
    CAlumno **pArray= nullptr;
public:
    CSeccion(){}
    CSeccion(int _n):n(_n)
    {
        pArray = new CAlumno*[n];
    }

    ~CSeccion()
    {
        for(int i=0; i<n; i++)
            delete pArray[i];
        delete []pArray;
    }

    void  RegistrarAlumnos();
    float PromediodelaSeccion();
    int   numAprobados();
    void  Listado();
};
#endif