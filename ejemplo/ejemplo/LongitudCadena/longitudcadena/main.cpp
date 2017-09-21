#include <iostream>
using namespace std;

int numcad (char *s){
    int len = 0 ;
    for ( ;*s != '\0'; s++){
        len++;
    }
    return len;
}
int main()
{
    char cadena[] = "cadena";
    cout<<numcad(cadena)<<endl;
}
