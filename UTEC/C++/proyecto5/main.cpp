#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;


int f_menor(){
    int menor=0, num;
    for( int i=0; i < 5; ++i){
        cout<< "Dato "<< (i+1) << " :";
        cin >> num;
        if(i==0)
            menor=num;
        if(num<menor)
            menor=num;
    }
    return menor;
}

int main() {
    //int res=f_menor();
    //cout<<"minimo: " << res;
    long int dado;
    srand(time(nullptr));
    //srand= numeros aleatorios
    for (int i=0;i<10;++i){
        do{
            dado=rand()%10;
        }while((dado<1)||(dado>6));
        cout<<dado<<"\n";
    }
    return 0;
}