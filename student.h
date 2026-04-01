#include "MU_Person.h"


class student:public MU_person{
private:
          double gpa; 
	
public:
    student(long=111 ,double=2.5,string="Nattawut",long=1234);
    ~student();
    void display(); // display_person
   
};

student::student(long i, double g,string s,long nid):MU_person(i,s,nid){
// Finish constructor to set all values
        gpa = g;
         cout<<"MU student constructor  "<<gpa<<endl;
         
  
}
student::~student(){
     cout<<"-------"<<endl;
     cout<<"student destructor "<<gpa<<endl; 
}


void student::display(){
  display_person();
  cout<<"GPA : "<<gpa<<endl;

}
