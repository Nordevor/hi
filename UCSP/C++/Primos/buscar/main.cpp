#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Ingrese un numero:" << endl;
    cin >> x;

    if (x%2==0 || x%3==0||x%5==0||x%7==0)
        cout <<"Si es primo"<< endl;
    else
        cout <<"No es primo"<< endl;
    return 0;
}
