#include <iostream>
#include <cstdlib>
#include "student.h"
#include "LL.h"
using namespace std;

int main(int argc, char *argv[]) {  
    LL A;
    NODE *t;

    // ทำการ Loop ข้ามทีละ 3 ค่า เพราะข้อมูลมาเป็นชุด: id gpa name
    for(int i = 1; i < argc; i += 3) {
        if (i + 2 < argc) { // เช็คว่า arg มีครบ 3 ตัวหรือไม่
            long id = atol(argv[i]);
            double gpa = atof(argv[i+1]);
            string name = argv[i+2];
            
            // สร้าง student และส่งค่าไป Constructor (ค่า nid จะอิงจาก default)
            t = new student(id, gpa, name);
            A.add_node(t);
        }
    }
    
    cout << endl << "\t" << endl;
    A.show_all();
    cout << endl;
    
    return 0;
}