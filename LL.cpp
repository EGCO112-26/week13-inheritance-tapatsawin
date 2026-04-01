#include <iostream>
#include "LL.h"
using namespace std;

LL::LL() {
    hol = NULL;
    size = 0;
}

LL::~LL() {
    // clear all nodes
    NODE* t = hol;
    while(t != NULL) {
        NODE* nextNode = t->move_next();
        delete t;
        t = nextNode;
    }
}

void LL::show_all() {
    NODE* t = hol;
    for(int i = 0; i < size; i++) {
        t->show_node(); 
        t = t->move_next();
    }
}

void LL::add_node(NODE *&A) {
    if (hol == NULL) {
        hol = A;
    } else {
        hol->insert(A);
        hol = A;
    }
    size++;
}