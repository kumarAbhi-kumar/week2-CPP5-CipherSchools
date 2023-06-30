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
	
//	student(int i, string n, string p, int a){
//		name = n;
//		id = i;
//		passcode = p;
//		age = a;
//	}

	student(int id, string name, string passcode, int age){ // use of this keyword
		this->name = name;
		this->id = id;
		this->passcode = passcode;
		this->age = age;
	}
	
	void into(){
		cout << "My name is " << name << ", my id is " << id << endl;
	}
	
};


int main(){
	
	student s1(1, "Kumar", "1001", 23);
	student s2;
	student s3;
	s3 = s1; // copy constructor
	s3.into();
	
	student *ptrs = &s1;
	cout << ptrs->name << endl;
	cout << (*ptrs).name << endl;
}
