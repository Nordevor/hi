#include <iostream>
#include "CAlumno.h"
using namespace std;

int main()
{
    string unnombre;
    string unapellidoPaterno;
    string unapellidoMaterno;
    float  notaeT,notaeD,notasP1,notasP2,notasP3,notasP4,notapY1,notapY2;

    int n;
    CAlumno **pSeccion= nullptr;
    float Suma, PromediodelSalon, Promedio;
    int nAprobados, nDesaprobados;

    cout << "Numero de alumnos : "; cin >> n;
    pSeccion = new CAlumno*[n];
    Suma=0;
    nAprobados=nDesaprobados=0;
    for(int i=0; i<n; i++)
    {
        cout <<"\nAlumno numero " << i+1 << "\n";
        cout << "Nombre                  : "; cin >> unnombre;
        cout << "Apellido Paterno        : "; cin >> unapellidoPaterno;
        cout << "Apellido Materno        : "; cin >> unapellidoMaterno;
        cout << "Evaluacion teorica      : ";  cin >>  notaeT;
        cout << "Evalacion de Desempenno : "; cin>>notaeD;
        cout << "Set 1                   : "; cin >> notasP1;
        cout << "Set 2                   : "; cin >> notasP2;
        cout << "Set 3                   : "; cin >> notasP3;
        cout << "Set 4                   : "; cin >> notasP4;
        cout << "Proyecto 1              : "; cin>>notapY1;
        cout << "Proyecto 2              : "; cin>>notapY2;

        pSeccion[i] = new CAlumno(unnombre, unapellidoPaterno, unapellidoMaterno, notaeT,notaeD,
                                  notasP1,notasP2,notasP3,notasP4,notapY1,notapY2);
        cout << "\n";
        cout << "Promedios de " << pSeccion[i]->getnombre() << " " << pSeccion[i]->getapellidoPaterno();
        cout << " " << pSeccion[i]->getapellidoMaterno() <<"\n";
        cout << "Promedio del curso               : "  << pSeccion[i]->PromedioPonderado() << "\n";
        cout << "Promedio de los set de problemas : " << pSeccion[i]->PromediodeSetdeProblemas();

        Promedio = pSeccion[i]->PromedioPonderado();
        if(Promedio >10.5)
            nAprobados++;
        else
            nDesaprobados++;
        Suma+=Promedio;
    }
    PromediodelSalon= Suma/n;
    cout <<"\n\nEstadisticas del salon \n\n";
    cout << "Promedio del salon  : "  <<PromediodelSalon << "\n";
    cout << "Aprobados           : " << nAprobados << "\n";
    cout << "Desaprobados        : " << nDesaprobados<< "\n";
    for(int i=0; i<n; i++)
        delete pSeccion[i];
    delete [] pSeccion;
    return 0;
}