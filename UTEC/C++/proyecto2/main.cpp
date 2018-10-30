#include <iostream>;
using namespace std;

void nota1(){
    int nota;
    cout<< "Ingrese nota: "; cin >> nota;
    if (nota>10){
        cout << "Aprobado"<<endl;
    }
    else{
        cout << "Desaprobado"<<endl;
    }
}

void nota2(){
    int n1, n2, n3;
    cout<< "Ingrese nota: "; cin >> n1;
    cout<< "Ingrese nota: "; cin >> n2;
    cout<< "Ingrese nota: "; cin >> n3;
    if (n1<n2){
        cout << n2 << " es la mayor nota";
    }
    if (n2<n3){
        cout << n3 << " es la mayor nota";
    }
    if ((n1==n2) && (n1==n3) && (n2==n3)){
        cout << "Son iguales"<< endl;
        cout << "Esponja, enloquesiste?";
    }
    else{
        cout << n1 << " es la mayor nota";
    }
}

void nota3(){
    int n1, n2, n3,n4,n5;
    cout<< "Ingrese nota: "; cin >> n1;
    cout<< "Ingrese nota: "; cin >> n2;
    cout<< "Ingrese nota: "; cin >> n3;
    cout<< "Ingrese nota: "; cin >> n4;
    cout<< "Ingrese nota: "; cin >> n5;
    if ((n1<n2) && (n1<n3) && (n1<n4) && (n1<n5)){
        cout << n1 << " es la menor nota";
    }
    if ((n2<n1) && (n2<n3) && (n2<n4) && (n2<n5)){
        cout << n2 << " es la menor nota";
    }
    if ((n3<n1) && (n3<n2) && (n1<n4) && (n1<n5)){
        cout << n3 << " es la menor nota";
    }
    if ((n4<n1) && (n4<n2) && (n4<n3) && (n4<n5)){
        cout << n4 << " es la menor nota";
    }
    if ((n1==n2) && (n1==n3) && (n1==n4) && (n1==n5) && (n2==n3) && (n2==n4) && (n2==n5) && (n3==n4) && (n3==n5) && (n4==n5)) {
        cout << "Son iguales"<< endl;
        cout << "Esponja, enloquesiste?";
    }
    else{
        cout << n5 << " es la menor nota";
    }
}
void nota4(){
    int a=0,b=0,c=0,d=0,e=0;
    while(true)
    {
        int a=0;
        cout << "Coloque un valor: " << endl; cin >> a;
        if(a==0){
            break;
        }
        else {
            c+=1;
            if(a%2==0){
                d+=1;
            }
            else{
                e+=1;
            }
        }

    }
    cout << "Valores ingresados: " << c<< endl;
    cout << "Valores pares: " << d<<endl;
    cout << "Valores impares: " << e<<endl;
}
void nota5() {
    int x=0, y=1, z=0, d=0,e=0,f=0;
    char a=0, b=0, c=0;
    cout<<"Numero de encuestados: "<<endl; cin>>x;
    while(x>0){
        cout << "Encuesta " << y << ":" <<endl;
        cout << "¿Que bebida prefiere?:"  <<endl;
        cout << "Mango Frappuccino (a)" << endl << "Fresa Creme Frappuccino (b)" << endl << "Vainilla Creme Frappuccino (c)" << endl;cin >> z;
        if (z==a){
            d+=1;
        }
        if (z==b){
            e+=1;
        }
        if (z==c){
            f+=1;
        }
        else{
            cout << "Cmamo, te cierro el programa" <<endl;
            break;
        }
        x-=1;
        y+=1;

    }
    cout<< "El valor en porcentajes es:" << endl;
    cout << "Mango Frappuccino: " << (d*100)/a<<endl;
    cout <<"Fresa Creme Frappuccino: " << (e*100)/b <<endl;
    cout << "Vainilla Creme Frappuccino: "<<(f*100)/c << endl;
}
int main() {
    //nota1();
    //nota2();
    //nota3();
    //nota4();
    nota5();
    return 0;
}