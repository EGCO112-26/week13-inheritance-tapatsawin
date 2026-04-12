
#ifndef MU_PERSON_H
#define MU_PERSON_H

#include "Thai_person.h"
#include "NODE.h"

class MU_person : public NODE, public Thai_person {
private:
	string name;
public:
	MU_person(long=112, string="Prapaporn", long=0);
	void display_person();
	~MU_person();
};

MU_person::~MU_person(){
}

MU_person::MU_person(long x, string n, long nat) : NODE(x), Thai_person(nat) {
	name = n;
	cout << "MU person constructor " << data << endl;
}

void MU_person::display_person(){
	display_thai();
	cout << "id=" << data << " name=" << name << endl;
}

#endif
