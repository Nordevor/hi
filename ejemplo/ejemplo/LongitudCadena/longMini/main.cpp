#include <iostream>
using namespace std;

int numcad (char *s){
    char *p=s;
    while (*p!='\0'){
        p++;
    }
    return p-s;
}
int main()
{
    char cadena[] = "cadena";
    cout<<numcad(cadena)<<endl;
}
