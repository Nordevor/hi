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
        void print();
};

#endif // COMPLEJO_H
