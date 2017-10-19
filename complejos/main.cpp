#include <iostream>
#include "complejo.h"

using namespace std;

int main()
{
    complejo x(5,9);
    complejo y(9,4);
    x.suma(y);
    x.print();

    return 0;
}
