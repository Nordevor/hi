#include "CAlumno.h"

float CAlumno::PromedioPonderado()
{
    float Prom;

    Prom = 0.25*eT + 0.3*eD + 0.05*sP1 + 0.1*sP2 + 0.1*sP3 + 0.1*sP4 +
           0.1*pY1 + 0.2*sP2;
    return(Prom);
}

float CAlumno::PromediodeSetdeProblemas()
{
    return( (sP1 + sP2 + sP3 + sP4)/4.0);
}