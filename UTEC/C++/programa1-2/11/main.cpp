#include <iostream>
#include "CAlumno.h"
using namespace std;

int main()
{
    string unnombre;
    string unapellidoPaterno;
    string unapellidoMaterno;
    float  notaeT,notaeD,notasP1,notasP2,notasP3,notasP4,notapY1,notapY2;
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
    CAlumno alumno1(unnombre, unapellidoPaterno, unapellidoMaterno, notaeT,notaeD,
                    notasP1,notasP2,notasP3,notasP4,notapY1,notapY2);
    cout << "\n";
    cout << "Promedios de " << alumno1.getnombre() << " " << alumno1.getapellidoPaterno();
    cout << alumno1.getapellidoMaterno() <<"\n";
    cout << "Promedio del curso               : "  << alumno1.PromedioPonderado() << "\n";
    cout << "Promedio de los set de problemas : " << alumno1.PromediodeSetdeProblemas();
    return 0;
}
