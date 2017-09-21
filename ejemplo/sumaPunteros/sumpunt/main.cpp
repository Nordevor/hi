#include <iostream>
using namespace std;

int sumpunt(int arr[], int n){
    int *pa, sum = 0 ;
    pa= &arr[0];
    for (int i=0; i<n    ; i++){
        sum += *(pa+i);
    }
    return sum;
}
int main()
{
    int a[4] = {1,2,3,4};
    cout<<sumpunt(a,4)<<endl;
}
