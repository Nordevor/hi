#include <iostream>
using namespace std;
int main(){
  int array[5],tam = 5,x=0,aux;
  array[0]=1;
  array[1]=2;
  array[2]=3;
  array[3]=4;
  array[4]=5;
  while((tam-x)/2 > x){
    aux=array[x];
    array[x]=array[tam-1-x];
    array[tam-1-x]=aux;
    x++;
  }
  for(x=0;x<tam;x++)
  cout<<array[x]<<endl;
}
