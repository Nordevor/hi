#include "CRectangulo.h"

float CRectangulo::Area(){
    return(largo * ancho);
}
float CRectangulo::Perimetro(){
    return(2*largo+2*ancho);
}