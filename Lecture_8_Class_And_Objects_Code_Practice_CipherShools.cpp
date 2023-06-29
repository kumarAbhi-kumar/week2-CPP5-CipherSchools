#include <bits/stdc++.h>
using namespace std;

class student{ // would now act as blueprint 
	
	string passcode;
	
	protected:
		int age;
	
	public:
	string name;
	int id;
	
	student(){ // default constructor
	}
	
	
	// initializer list and parameterised constructor
	student(string passcode, string name, int id) : passcode(passcode), name(name), id(id){}
	
	void into(){
		cout << "My name is " << name << ", my id is " << id << endl;
	}
	
};


int main(){
	
	student st; // this st object / variable of student would have name & id as the attribute
	
	student s2("101", "Kumar", 1);
	student *sptr = &s2;
	
	int a = 10;
	int *iptr = &a;
	
	if(sizeof(sptr) == sizeof(iptr))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	
	
	st.into();
	s2.into();
	
	(*sptr).into(); 
	// or
	// sptr -> into();
	
	student s3;
	s3 = s2;  // copy constructor
	s3.into();
	
	student s4(s2);
	

	
}
