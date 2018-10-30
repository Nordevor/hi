#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

void mostrarRefranIncompleto();
void obtenerRespuesta();
void compararRespuesta();
void menuPrograma();
string Frase;
int random;
int puntuacion;

string Refran[10] = {"En boca cerrada no entran moscas",
                     "A palabras necias, oidos sordos",
                     "A buen entendedor, pocas palabras",
                     "Zapateros a sus zapatos",
                     "Visteme despacio que tengo prisa",
                     "A quien madruga, Dios le ayuda",
                     "A caballo regalado no le mires los dientes",
                     "Piensa mal y acertara",
                     "Al mal tiempo, buena cara",
                     "Mas vale tarde que nunca"};

string PrimeraParte[10] = {"En boca cerrada",
                           "A palabras necias,",
                           "A buen entendedor,",
                           "Zapateros",
                           "Visteme despacio",
                           "A quien madruga,",
                           "A caballo regalado",
                           "Piensa mal",
                           "Al mal tiempo,",
                           "Mas vale tarde"};

string SegundaParte[10] = {"no_entran_moscas",
                           "oidos_sordos",
                           "pocas_palabras",
                           "a_sus_zapatos",
                           "que_tengo_prisa",
                           "dios_le_ayuda",
                           "no_le_mires_los_dientes",
                           "y_acertaras",
                           "buena_cara",
                           "que_nunca"};

string Significados[10] = {"Callarse para prevenir errores.",
                           "Ignorar a aquello o a quienes no quieres escuchar porque no te aportan nada.",
                           "Si una persona es buena entendedora, no le hara falta darle muchas explicaciones.",
                           "Cada persona tienen algo que se le da bien, pues debera de atender a ello.",
                           "Cuando tienes prisa, no intentes hacer las cosas rapido porque te equivocaras y tendras que repetirlas.",
                           "Anima a una persona a madrugar con positividad porque podra ser mas productivo.",
                           "Cuando a una persona le regalan algo, no deberia de poner problemas.",
                           "Piensa mal sobre las personas y no te equivocaras.",
                           "Ante las adversidades, siempre hay que tener positividad.",
                           "Mejor ahora aunque sea tarde, que perderlo."};

int main(){
    int num;
    cout << "***************" << "\n";
    cout << "*                                         *" << "\n";
    cout << "*    Bienvenidos al juego de refranes:    *" << "\n";
    cout << "*                                         *" << "\n";
    cout << "***************" << "\n";

    do{
        menuPrograma();
        cin >> num;
        if(num==1){
            mostrarRefranIncompleto();
            obtenerRespuesta();
            compararRespuesta();
        }
        if(num==2){
            cout << "Su puntuacion actual es: " << puntuacion << "\n";
            num = 1;
        }
        if(num==3){
            cout << "Gracias querido profesor Alvarado...";
        }
    }while(num == 1);

    return 0;
}

void menuPrograma(){
    cout << "Ingrese el numero de la opcion que desea utilizar: " << "\n";
    cout << "(1) Jugar a completar refranes." << "\n";
    cout << "(2) Mostrar resultados anteriores." << "\n";
    cout << "(3) Salir." << "\n";
    cout << "No olvidar, en los espacios colocar guiones bajo _" << "\n";
    cout << "Ingrese el numero: " << "\n";
}

void mostrarRefranIncompleto(){

    srand(time(NULL));
    int random = 0 + rand() % (10 - 1);
    if(random == 0){
        cout << PrimeraParte[random] << "\n";
    }
    else if(random == 1){
        cout << PrimeraParte[random] << "\n";
    }
    else if(random == 2){
        cout << PrimeraParte[random] << "\n";
    }
    else if(random == 3){
        cout << PrimeraParte[random] << "\n";
    }
    else if(random == 4){
        cout << PrimeraParte[random] << "\n";
    }
    else if(random == 5){
        cout << PrimeraParte[random] << "\n";
    }
    else if(random == 6){
        cout << PrimeraParte[random] << "\n";
    }
    else if(random == 7){
        cout << PrimeraParte[random] << "\n";
    }
    else if(random == 8){
        cout << PrimeraParte[random] << "\n";
    }
    else if(random == 9){
        cout << PrimeraParte[random] << "\n";
    }
}

void obtenerRespuesta(){
    cout << "Ingresa la frase: " << "\n";
    cin >> Frase;
    cout << endl;
}

void compararRespuesta(){
    cout << Refran[random] << endl;
    if(Frase==SegundaParte[random]) {
        puntuacion++;
        cout << "Respuesta correcta" << endl;
        cout << "El significado es: " << Significados[random]<< endl;
    }
    else {
        cout << "Respuesta incorrecta." << "\n";
    }
}