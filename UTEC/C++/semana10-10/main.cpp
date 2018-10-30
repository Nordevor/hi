#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream miarchivo("datos.txt",ios::out);
    string oracion;
    cout << "Oracion: ";
    getline(cin, oracion);
    for (auto i=begin(oracion);i<end(oracion);i++ ){
        miarchivo << *i << "\n";
    }

    miarchivo.close();
    return 0;
}