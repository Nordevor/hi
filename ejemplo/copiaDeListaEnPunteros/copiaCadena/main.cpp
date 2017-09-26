#include <iostream>

using namespace std;

/*void strcpy(char s[], char t[]){
    for (int i=0;s[i]!= '\0'; s++){
        s[i]=t[i];
    }
    t[i]='\0'
}
*/
/*void strcpy(char *s, char *t){
    int i;
    i=0;
    while ((s[i] = t[i])!= '\0')
        i++;
}
*/
void strcpy(char *s, char *t){
    while ((*s++ = *t++))
        ;
}
int main()
{
    char s[]="cien", t[10];
    strcpy(t,s);
    cout << t << endl;
    return 0;
}
