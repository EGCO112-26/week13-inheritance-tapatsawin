#include <iostream>
#include "NODE.h"
#include "LL.h"
using namespace std;

LL::LL() {
    hol = NULL;
    size = 0;
}

LL::~LL() {
    // เคลียร์โหนดทั้งหมดเพื่อคืน Memory
    NODE* t = hol;
    while(t != NULL) {
        NODE* nextNode = t->move_next();
        delete t;
        t = nextNode;
    }
}

void LL::show_all() {
    NODE* t = hol;
    // ทำการไล่ตามขนาดของ LL
    for(int i = 0; i < size; i++) {
        t->show_node();
        t = t->move_next();
    }
}

void LL::add_node(NODE *&A) {
    A->insert(hol); // โหนดใหม่ (A) ชี้ next ไปหาหัวแถวเดิม (hol)
    hol = A;        // ย้ายป้ายหัวแถว (hol) มาไว้ที่โหนดใหม่ (A)
    size++;
}