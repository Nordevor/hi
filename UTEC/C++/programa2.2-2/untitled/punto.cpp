//
// Created by damin on 02/11/18.
//
#include <iostream>
#include <cmath>
#include "punto.h"

void punto:: imprimir(float x, float y){
    cout<<"x ="<<x<<"  y = "<<y<<endl;
}

float punto:: distancia(punto p2, punto p1){
    return sqrt(pow(p2.getx()-p1.getx(),2)+pow(p2.gety()-p1.gety(),2));
}
float gety(float y)  {
    return y;
}

float getx(float x)  {
    return x;
}