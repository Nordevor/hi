#include <iostream>

using namespace std;

int main()
{
    int n=0, m=1, aux=0, sum=0;
    while (aux < 4000000){
        aux=n+m;
        if (aux%2==0){
            sum+=aux;
        }
        n=m;
        m=aux;

    }
    cout << aux << endl;
}
