#ifndef THAI_PERSON_H
#define THAI_PERSON_H

#include <iostream>
using namespace std;

class Thai_person {
private: 
    long nat_id;
public: 
    Thai_person(long = 0);
    ~Thai_person();
    void display_thai();
};

Thai_person::Thai_person(long nid) {
    nat_id = nid;
    // ละการแสดงผลไว้เพื่อให้ output ตรงกับตัวอย่าง
}

Thai_person::~Thai_person() {
    // Destructor ของ Thai_person
}

void Thai_person::display_thai() {
    cout << "Nat_id: " << nat_id << endl;
}

#endif