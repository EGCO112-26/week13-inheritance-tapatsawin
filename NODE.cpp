#include <iostream>
#include "NODE.h"
using namespace std;

NODE::NODE(int x) {
    data = x;
    next = NULL;
    cout << "adding " << x << endl;
}

NODE::~NODE() {
    cout << "Node " << data << " is being deleted" << endl;
}

NODE* NODE::move_next() {
    return next;
}

void NODE::show_node() {
    cout << "Node data:" << data << endl;
}

void NODE::insert(NODE*& x) {
    next = x;  // เปลี่ยนจาก x->next = this; เป็น next = x;
}