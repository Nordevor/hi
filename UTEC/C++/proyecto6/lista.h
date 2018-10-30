//
// Created by damin on 14/09/18.
//

#ifndef PROYECTO6_LISTA_H
#define PROYECTO6_LISTA_H


struct Nodo {
    int element;
    Nodo* next;
};

class lista {
private:
    Nodo* front = nullptr;
public:
    void add(int v);
    void removefirst();
    int size();
    int find(int v);
    void print();
};

#endif //PROYECTO6_LISTA_H
