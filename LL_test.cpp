#include <iostream>
#include <cstdlib>
#include "student.h"
#include "LL.h"
using namespace std;

int main(int argc, char *argv[]) {  
    LL A;
    NODE *t;

    // ขยับทีละ 3 เพื่อรับ (id, gpa, name)
    for(int i = 1; i < argc; i += 3) {
        long id = atol(argv[i]);
        double gpa = atof(argv[i+1]);
        string name = argv[i+2];
        
        t = new student(id, gpa, name);
        A.add_node(t);
    }
    
    // พิมพ์ช่องว่างให้ตรงกับแพทเทิร์นในโจทย์
    cout << "         \n\n ";
    A.show_all();
    cout << " \n\n";
    
    return 0;
}