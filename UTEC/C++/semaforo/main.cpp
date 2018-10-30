#include <iostream>
using namespace std;

int ma[5][3];
void uno() {
    int y=1, a=0;
    for(int f=0;f < 5;++f){
        for(int c=0; c<2 ; ++c){
            cout << ma[f][c] << "\t";
            ma[f][c]=0;
            for(int x=0; x<2 ;++x){
                y+=ma[2][a];
            }
            cout<<y;
        }
        cout << "\n";
    }

}

int main(){
    uno();
}