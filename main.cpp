#include <iostream>
using namespace std;
#include "student.h"

int main() {
    cout << "--- Test MU_person ---" << endl;
    MU_person m;
    m.display_person();
    
    cout << endl << "--- Test student ---" << endl;
    student m1(6813105, 3.5, "Act"), m2(6813115), m3;
    
    // m1.display() จะแสดงทั้ง id, name และ gpa 
    // เพราะข้างใน display() มีการเรียก display_person() ไว้แล้ว
    m1.display(); 
    
    cout << endl << "=======" << endl;

    // การทดสอบ Pointer และ Destructor
    student* p = new student(6613265, 1.7, "Hok");
    delete p;
  
    return 0;
}