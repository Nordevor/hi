#include <iostream>
#include <cstdlib>
#include<ctime>
#include "lista.h"
using namespace std;

int main(){
    for(int i=1;i<1000;i++){
        lista L;
        for(int k=0;k<=i;k++){
            L.add(k);
        }
        int ran = rand()%i;
        cout<<L.find(ran)<<"\n";
    }
}