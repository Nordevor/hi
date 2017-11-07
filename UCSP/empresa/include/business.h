#ifndef BUSINESS_H
#define BUSINESS_H
#include <string>
using namespace std;

class business
{
    public:
        string prenom;
        int RUC;
        empresa();
        empresa(string prenom, int RUC);

        void setPrenom(string pr);
        void setRUC(int ru);

        void print();
};

#endif // BUSINESS_H
