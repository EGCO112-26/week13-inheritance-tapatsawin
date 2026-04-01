#pragma once
#include <iostream>
#include <string>
#include "Thai_person.h"
#include "NODE.h"
using namespace std;

// สืบทอดมาจาก Thai_person และ NODE
class MU_person : public Thai_person, public NODE {
private:
    long id;
    string name; 
public:
    MU_person(long = 112, string = "Prapaporn", long = 1234);
    void display_person();
    ~MU_person();
};

// ส่งต่อ id ให้กับ constructor ของ NODE และ nid ให้กับ Thai_person
inline MU_person::MU_person(long x, string n, long nid) : Thai_person(nid), NODE(x) {
    id = x;
    name = n;
    cout << "MU person constructor " << id << endl;
}

inline MU_person::~MU_person() {
    // cout<<"Destructor id="<<id<<endl;
}

inline void MU_person::display_person() {
    display_thai(); // แสดงข้อมูลจาก Thai_person
    cout << "id: " << id << endl << "name: " << name << endl;
}