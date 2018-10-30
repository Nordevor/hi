#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main1() {
    fstream miarchivo("paises.txt",ios::out);
    string pais;
    do{
        cout << "Pais: ";
        getline(cin, pais);
        if(pais.size()!=0)
            miarchivo << pais << "\n";
    }while(pais.size()!=0);
    miarchivo.close();
    return 0;
}