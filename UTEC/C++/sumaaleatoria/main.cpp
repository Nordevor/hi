#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    int a[20], ar[20], ac[20], d = 0;
    srand(time(nullptr));
    //srand= numeros aleatorios
    for (int i = 0; i < 20; ++i) {
        do {
            a[i] = rand() % 100 }
        while ((a[i] < 1) || (a[i] > 99));
        cout << a[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 20; ++i) {
        do {
            ar[i] = rand() % 100;
        } while ((ar[i] < 1) || (ar[i] > 99));
        cout << ar[i] << " ";
    }
    cout << "\n";
    for (int i=0; i<20;++i){
        ac[i]=a[i]+ar[i];
        cout<< ac[i] <<" ";
    }
}