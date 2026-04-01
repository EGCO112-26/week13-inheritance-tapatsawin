#pragma once
#include <iostream>
using namespace std;

class Thai_person {
private: 
    long nat_id;
public: 
    Thai_person(long = 0);
    ~Thai_person();
    void display_thai(); // สร้างฟังก์ชัน display_thai
};

Thai_person::Thai_person(long nid) {
    nat_id=nid;
    // cout<<"nat_id: "<<nat_id<<endl;
    // cout<<"MU Student Constructor: "<<nat_id<<endl;
}

Thai_person::~Thai_person() {
    cout << "Thai_person Destructor nat_id: " << nat_id << endl;
}

void Thai_person::display_thai() {
    cout << "Nat_id: " << nat_id << endl;
}