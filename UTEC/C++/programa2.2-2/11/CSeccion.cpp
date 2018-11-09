#include <iostream>
#include <iomanip>
#include "CSeccion.h"

using namespace std;

void  CSeccion::RegistrarAlumnos()
{
    string unnombre;
    string unapellidoPaterno;
    string unapellidoMaterno;
    float  notaeT,notaeD,notasP1,notasP2,notasP3,notasP4,notapY1,notapY2;
    for(int i=0; i<n; i++) {
        cout << "\nAlumno numero " << i + 1 << "\n";
        cout << "Nombre                  : ";cin >> unnombre;
        cout << "Apellido Paterno        : ";cin >> unapellidoPaterno;
        cout << "Apellido Materno        : ";cin >> unapellidoMaterno;
        cout << "Evaluacion teorica      : ";cin >> notaeT;
        cout << "Evalacion de Desempenno : ";cin >> notaeD;
        cout << "Set 1                   : ";cin >> notasP1;
        cout << "Set 2                   : ";cin >> notasP2;
        cout << "Set 3                   : ";cin >> notasP3;
        cout << "Set 4                   : ";cin >> notasP4;
        cout << "Proyecto 1              : ";cin >> notapY1;
        cout << "Proyecto 2              : ";cin >> notapY2;

        pArray[i] = new CAlumno(unnombre, unapellidoPaterno, unapellidoMaterno, notaeT, notaeD,
                                notasP1, notasP2, notasP3, notasP4, notapY1, notapY2);
    }
}


float CSeccion::PromediodelaSeccion()
{
    float Suma=0;
    for(int i=0; i<n; i++)
    {
        Suma += pArray[i]->getPromedio();

    }
    return(Suma/n);
}

int   CSeccion::numAprobados()
{
    int nAprobados=0;

    for(int i=0; i<n; i++)
        if(pArray[i]->getPromedio()>10.5)
            nAprobados++;
    return nAprobados;
}

void  CSeccion::Listado()
{
    cout <<"\nListado de alumnos\n";
    cout << setw(20) <<"NOMBRE" << setw(20) << "APELLIDO PATERNO"<< setw(20) << "APELLIDO MATERNO" << setw(20) <<"PROMEDIO\n";
    for(int i=0; i<n; i++)
    {
        cout << setw(20) <<pArray[i]->getnombre()<< setw(20) <<pArray[i]->getapellidoPaterno() << setw(20) <<pArray[i]->getapellidoMaterno();
        cout << setw(20) <<pArray[i]->getPromedio()<<"\n";
    }
}