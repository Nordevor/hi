#include <iostream>

using namespace std;

int main()
{
    long long i, num=600851475143;
    for(i=3; i!=num; i+=2){
        if (num %i==0){
            num=num/i;
        }
    }
    cout << num << endl;
}
