#include <iostream>
#include <cstdlib>
#include <string>
#include "student.h"
#include "LL.h"
using namespace std;

int main(int argc, char *argv[]) {  
    LL A;
    NODE *t;

    // ต้องขยับทีละ 3 เพราะข้อมูลมาเป็นชุด (id, gpa, name)
    for(int i = 1; i < argc; i += 3) {
        long id = atol(argv[i]);
        double gpa = atof(argv[i+1]);
        string name = argv[i+2];
        
        t = new student(id, gpa, name);
        A.add_node(t);
    }
    
    A.show_all();
    return 0;
}