#include <iostream>
using namespace std;
#include "student.h"


int main(){
  MU_person m;
  m.display_person();
 
  student m1(6813105,3.5,"Act"),m2(6813115),m3;
  m1.display(); // id gpa name
  m1.display_person();
  cout<<endl<<"======="<<endl;
  //m1.display_person(); //id

//  p=new student(6613265,1.7,"Hok");
 // delete p;
  
  return 0;
   }

// Add constructor --> set name 
// modify display() -->id/name/gpa
