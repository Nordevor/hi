#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <string>
using namespace std;

class employe
{
    public:
        string name, fecha;
        int salario;

        empleado();
        empleado(string name, int salario, string fecha);

        void setName(string n);
        void setSalario(int s);
        void setFecha(string f);

        void print();
};
#endif // EMPLOYE_H
