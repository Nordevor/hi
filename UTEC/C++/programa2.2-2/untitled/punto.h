//
// Created by damin on 02/11/18.
//
#include <iostream>
#include <cmath>
#ifndef UNTITLED_PUNTO_H
#define UNTITLED_PUNTO_H

using namespace std;
class punto {
private:
    float x,y;
public:
float getx();

float gety();

punto(float  _x=0, float _y=0):x(_x)   ,y(_y){};

float distancia(){};
void imprimir(){};



};


#endif //UNTITLED_PUNTO_H
