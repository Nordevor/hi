#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>

using namespace std;

class complejo
{
    private:
        int r;
        int i;
    public:
        complejo();
        complejo(int x, int y);

        complejo suma(complejo x);
        bool igualdad(complejo x);
        void multiplicacion(int o);
        void print();
};

#endif // COMPLEJO_H
