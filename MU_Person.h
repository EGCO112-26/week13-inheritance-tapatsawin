#ifndef MU_PERSON_H
#define MU_PERSON_H

#include <iostream>
#include <string>
#include "NODE.h"
#include "Thai_person.h"
using namespace std;

// สืบทอดแบบ Multiple Inheritance
class MU_person : public NODE, public Thai_person {
protected:
    long id;
    string name; 

public:
    MU_person(long = 112, string = "Prapaporn", long = 1234);
    virtual ~MU_person();
    void display_person();
};

// นำ x ส่งให้ NODE(x) และ nid ส่งให้ Thai_person(nid)
MU_person::MU_person(long x, string n, long nid) : NODE(x), Thai_person(nid) {
    id = x;
    name = n;
    cout << "MU person constructor " << id << endl;
}

MU_person::~MU_person() {
    // Destructor (ละการพิมพ์ไว้เพื่อให้ตรงกับตัวอย่าง output)
}

void MU_person::display_person() {
    cout << "show info" << endl;
    display_thai(); // เรียกใช้เมธอดจาก Thai_person
    cout << "id: " << id << endl << "name: " << name << endl;
}

#endif