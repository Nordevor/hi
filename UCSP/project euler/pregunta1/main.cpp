#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int n =1000;
    for (int i=0; i<n; i++){
        if(3*i<n){
            sum+=3*i;
        }
        if (5*i<n&&(5*i)%3!=0){
            sum+=5*i;
        }
    }
    cout<<sum<<endl;
}
