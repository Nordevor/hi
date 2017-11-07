#include <iostream>
using namespace std;

int enePrim(int num){
    int n=2;
    int i=0;
    int p;
    while(i<=num)
    {
        for (p=2;n%p!=0;p=p+1);
        if(p==n)
            {
            i=i+1;
            if (i==num)
                return n;
            }
        n=n+1;
    }
}

int main ()
{
    int num,n,p,i;
    cout <<"Ingresar la posicion del numero primo deseado:";
    cin>>num;
    cout<< enePrim(num);
    return 0;
}
