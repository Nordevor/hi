#include <iostream>
using namespace std;


int caracol() {
    int p= 1, c= 1,x,z,q;
    int a[50][50];
    cout << "Numero de filas: " << endl; cin>>x;
    cout << "Numero de columnas: " << endl; cin>>z;
    for ( int k = 0; k < x; k++ ){
        for ( int j = 0; j < z; j++ ) {
            a[k][j] = 0;
        }
    }
    for ( int i = 0; i < x; i++ ) {
        if ( p== 1 )
            for (int j = 0; j < z; j++) {
                if (a[i][j] == 0)
                    a[i][j] = c++;
            }
        p++;
        if ( p== 2 ) {
            q=x-(i + 1);
            for (int j = 0; j < x; j++) {

                if (a[j][q] == 0)
                    a[j][q] = c++;
            }
        }
        p++;
        if ( p== 3 ) {
            q=x-(i + 1);
            for (int j=z-1; j >= 0; j--) {
                if (a[q][j] == 0)
                    a[q][j] = c++;
            }
        }
        p++;
        if ( p== 4 ) {
            for (int j =z-1; j >= 0; j--) {
                if (a[j][i] == 0)
                    a[j][i] = c++;
            }
        }
        p=1;
    }
    for ( int y = 0; y< x; y++ ) {
        for ( int j = 0; j < z; j++ ) {
            if ( a[y][j] < 10 ) cout << "0"; cout << a[y][j] << "  ";
        }

        cout << endl;
    }

}
int main(){
    caracol();
    return 0;
}