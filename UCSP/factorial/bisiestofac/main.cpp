#include <iostream>

using namespace std;

bool bisiesto(int anho){
    int res = anho % 4 && (anho % 100!=0 || anho % 400==0);
    if (res==0)
        return true;
    else
        return false;
}

int main(){
    int n;
    cout << "Ingresar a�o: ";
    cin>>n;
    if (bisiesto(n))
        cout<<"A�o bisiesto";
    else
        cout<<"No lo es";
}
