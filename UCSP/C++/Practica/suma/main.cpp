#include <iostream>
using namespace std;

int suma(int arr[], int len){
    if (len  == 1){
        return arr[0];
    }
    else{
        return arr[len-1] + suma(arr,len-1);
    }
}

int main(){
    int a[]={1,2,3,4};
    cout<<"La suma es: "<<suma(a,4)<<endl;
    return 0;
}
