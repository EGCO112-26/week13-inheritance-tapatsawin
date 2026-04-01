#ifndef STUDENT_H
#define STUDENT_H

#include "MU_Person.h"
using namespace std;

class student : public MU_person {
private:
    double gpa;  

public:
    student(long = 111, double = 2.5, string = "Nattawut", long = 1234);
    ~student();
    void display();
};

student::student(long i, double g, string s, long nid) : MU_person(i, s, nid) {
    gpa = g;
    cout << "MU student constructor  " << gpa << endl;
}

student::~student() {
    // Destructor (ละการพิมพ์ไว้เพื่อให้ตรงกับตัวอย่าง output)
}

void student::display() {
    display_person();
    cout << "GPA : " << gpa << endl;
}

#endif