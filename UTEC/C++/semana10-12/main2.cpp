#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main1(){
    fstream miarchivo("matriz.txt",ios::in);
    string mac;
    while(getline(miarchivo,mac)){
        cout<<mac<<endl;
    }
    return 0;
}
