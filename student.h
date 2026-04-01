#pragma once
#include <iostream>
#include <string>
#include "MU_Person.h"
using namespace std;

class student : public MU_person {
private:
    double gpa; 
public:
    student(long = 111, double = 2.5, string = "Nattawut", long = 1234);
    ~student();
    void display(); 
    void show_node(); // Override เพื่อเชื่อมไป LL ได้สมบูรณ์
};

student::student(long i, double g, string s, long nid) : MU_person(i, s, nid) {
    gpa = g;
    cout << "MU student constructor  " << gpa << endl;
}

student::~student() {
    // cout<<"-------"<<endl;
    // cout<<"student destructor "<<gpa<<endl; 
}

void student::display() {
    display_person();
    cout << "GPA : " << gpa << endl;
}

void student::show_node() {
    display(); // ให้การแสดงผลผ่าน node ดึงข้อมูลทั้งหมดของ student มาโชว์
}