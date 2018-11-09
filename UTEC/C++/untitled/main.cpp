#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n , sumapar = 0;
    cout << "ingrese un numer";
    cin >> n;
    for (int i=0; i <= n; i++)
    {
        if(i % 2 == 0) sumapar+=i;
        else
}