#include <iostream>
using namespace std;

int main()
{
    int a[4] = {11,12,13,14};
    int x,y;
    int *pa ;
    pa= &a[0];
    x=*pa;
    y=*(pa +2);
    y= y +3;
    cout << *pa << " " << x << " " << y << " " << a[2];
}
