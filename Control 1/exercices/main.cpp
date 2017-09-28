#include <iostream>

using namespace std;

void porRef(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void porPunteros(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void invertirCadena(char *ptr, int len) {
    if(len/2 == 0) {
        return;
    }
    else {
        char tmp = *ptr;
        *ptr = *(ptr+len-1);
        *(ptr+len-1) = tmp;
        invertirCadena(++ptr, len-2);
    }
}

int strlen(char *cadena) {
    int len=0;
    for(; *cadena != '\0'; cadena++,len++);
    return len;
}

int main()
{
    cout << "==== Pregunta 1 ====" << endl;
    int x = 6;
    int y = 2;
    cout << (x >> 2) << endl;
    cout << (x & y) << endl;
    cout << (x | y) << endl;
    cout << (x << 2) << endl;

    cout << "==== Pregunta 2 ====" << endl;
    int a = 5;
    int &b = a;
    while(a <= 10){
        if(b++ == 5)
            continue;
        else
            break;
    }
    cout << a << endl;

    cout << "==== Pregunta 3 ====" << endl;
    int m = 5;
    int *ptr = &m;
    while(*ptr <= 10) {
        cout << *ptr++ << endl;
    }
    cout << m << endl;

    cout << "==== Pregunta 4 ====" << endl;
    int c = 5;
    int d = 6;
    porRef(c, d);
    cout << c << " " << d << endl;
    porPunteros(&c, &d);
    cout << c << " " << d << endl;

    cout << "==== Pregunta 5 ====" << endl;
    char cadena[] = "ciencia";
    cout << strlen(cadena) << endl;
    invertirCadena(cadena, strlen(cadena));
    cout << cadena << endl;

    return 0;
}
