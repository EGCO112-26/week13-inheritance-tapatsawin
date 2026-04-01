#include "Thai_person.h"
class MU_person:public Thai_person{
private:long id;
string name; 
  
protected:
  
public:
	MU_person(long=112 ,string ="Prapaporn",long=1234);
  void display_person();
  ~MU_person();
};


MU_person::~MU_person(){
  cout<<"Destructor id="<<id<<endl;
}
MU_person::MU_person(long x,string n,long nid){
   	  // Set up all MU_Person values
      id = x;
      name = n;
         cout<<"MU person constructor "<<id<<endl;
}

void MU_person::display_person(){
  cout<<"show info"<<endl;
 display_nat();
  cout<<"id: "<<id<<endl<<"name: "<<name<<endl;
    
}
