#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
using namespace std;


class jugador
{
    public:
        string name, position;
        int number, aggressivity;

        jugador();
        jugador(string name, int number, string position, int aggressivity);

        void setName(string n);
        void setNumber(int num);
        void setPosition(string pos);
        void setAggressivity(int a);

        void print();
};

#endif // JUGADOR_H
