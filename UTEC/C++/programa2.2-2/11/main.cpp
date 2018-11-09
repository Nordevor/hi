#include <iostream>
#include "CSeccion.h"

using namespace std;

int main()
{
    int n;
    CSeccion *pUnaSeccion;

    cout << "Numero de alumnos : "; cin >> n;
    pUnaSeccion = new CSeccion(n);

    pUnaSeccion->RegistrarAlumnos();
    pUnaSeccion->Listado();
    cout << "\n\nEstadísticas de la Sección \n";
    cout << "Promedio de la seccion : " << pUnaSeccion->PromediodelaSeccion() <<"\n";
    cout << "Numero de aprobados    : " << pUnaSeccion->numAprobados();

    delete pUnaSeccion;
    return 0;
}