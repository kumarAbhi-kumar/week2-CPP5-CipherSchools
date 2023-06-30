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

	// use of initializer list

	student(int id, string name, string passcode, int age) : id(id), name(name), passcode(passcode), age(age) {} 
	void into(){
		cout << "My name is " << name << ", my id is " << id << endl;
	}
	
	// Destructor: it is used dealocate the memory to a object which was allocated to it at the time of declaration
	// We can't overload it, it is by default executed by the compiler, 
	// It can't be declared static or const.
	// it has no return type not even void.
	// we can use the delete keyword to call the destructor
	// It doesn't have a body and to make it seperate '~' tilde operator is used infornt of it
	~student(){}
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
