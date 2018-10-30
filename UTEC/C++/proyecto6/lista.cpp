//
// Created by damin on 14/09/18.
//
#include <iostream>
#include "lista.h"
using namespace std;

void lista::add(int v){
    Nodo* k = new Nodo{v,nullptr};
    if (front==nullptr) {
        front = k;
    } else {
        Nodo* a = front;
        while(a->next!=nullptr){
             a=a->next;
         }
         a->next = k;
    }
}

void lista::removefirst(){
    front=front->next;
}
int lista::size(){
    int count=0;
    Nodo* actual = front;
    while(actual!=nullptr){
        count++;
        actual = actual->next;
    }
    cout<<count<<"\n";
}
int lista::find(int v){
    Nodo* actual = front;
    int count=0;
    while(actual!=nullptr){
        count++;
        if(actual->element==v){
            return count;
        }
        actual = actual->next;
    }
    return count;
}

void lista::print(){
    Nodo* actual = front;
    while(actual!=nullptr){
        cout<<actual->element<<"\n";
        actual = actual->next;
    }
}