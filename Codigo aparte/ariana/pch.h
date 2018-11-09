#ifndef ARIANA_PCH_H
#define ARIANA_PCH_H
using namespace std;

class Estrella{
public:
    int edad, color, luminosidad;
    Estrella();
    Estrella(int edad, int color, int luminosidad);
    int setEdad(int ee);
    int setColor(int cc);
    int setLuminosidad(int ll);
    bool comparar(int comp);
    void print();
};
#endif
