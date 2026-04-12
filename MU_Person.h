#include <iostream>
using namespace std;
#include "student.h"
#include "LL.h"
#include <cstdlib>

int main(int argc, char *argv[]){
    LL A;

    // argv: id1 gpa1 name1  id2 gpa2 name2 ...
    for(int i = 1; i + 2 < argc; i += 3){
        long   id  = atol(argv[i]);
        double gpa = atof(argv[i+1]);
        string name = argv[i+2];

        NODE* s = new student(id, gpa, name);
        A.add_node(s);
    }

    cout << endl;
    A.show_all();
    cout << endl;

    return 0;
}

