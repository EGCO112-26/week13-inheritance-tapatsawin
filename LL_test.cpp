#include <iostream>
#include "NODE.h"
#include "LL.h"
using namespace std;

LL::LL(){
    hol = NULL;
    size = 0;
}

LL::~LL(){
    // clear all nodes
    NODE* t = hol;
    NODE* tmp;
    int i;
    for(i = 0; i < size; i++){
        tmp = t->move_next();
        delete t;
        t = tmp;
    }
}

void LL::show_all(){
    NODE* t = hol;
    int i;
    for(i = 0; i < size; i++){
        t->show_node();
        t = t->move_next();
    }
}

void LL::add_node(NODE* A){
    if(hol != NULL){
        hol->insert(A);  // A->next = hol (current head)
    }
    hol = A;
    size++;
}
