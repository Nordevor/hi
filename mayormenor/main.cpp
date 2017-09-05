#include <iostream>

using namespace std;

int main()
{
    int n,notas;
    int suma=0;
    int mayor=0;
    int menor=0;

    float promedio=0;
    cout<<"ingrese la cantidad de elementos: " << endl;
    cin >> n;
    for (int i=0; i<n;i++){
        cout<< "Ingrese un numero: " << endl;
        cin >> notas;

        suma=suma+notas;
        if(i==0){
            mayor=notas;
            menor=notas;
        }
        else{
            mayor=notas>mayor ? notas:mayor;
            menor=notas<menor ? notas:menor;
        }


    }
    promedio=suma/n;
    cout<<"promedio: "<<promedio<<endl;
    cout<<"menor: "<<menor<<endl;
    cout<<"mayor: "<<mayor<<endl;

    return 0;
}
