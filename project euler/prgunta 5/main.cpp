#include <iostream>

using namespace std;

int main()
{
   int x=1, n=1, i ;
   while(x){
    n++;
    for(i=1; i<=20;i++){
        if ((n%i)!=0){
            break;
        }
        x=i==20?0:1;
    }
   }
   cout<<n<<endl;
   return 0;
}
