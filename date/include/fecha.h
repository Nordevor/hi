#ifndef FECHA_H
#define FECHA_H
#include <iostream>
using namespace std;

class fecha
{
     public:
        string month;
        int year, day;

        fecha();
        fecha(int day, string month, int year);

        void setDay(int dd);
        void setMonth(string mm);
        void setYear(int yy);
        bool aniobiciesto(int anio);
        void print();
};

#endif // FECHA_H
