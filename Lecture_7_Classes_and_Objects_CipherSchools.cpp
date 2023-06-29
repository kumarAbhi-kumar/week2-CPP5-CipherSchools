#include <bits/stdc++.h>
using namespace std;

class student{ // would now act as blueprint 
	
	string passcode;
	
	protected:
		int age;
	
	public:
	string name;
	int id;
	
	void setPasss(string s, int a){
		passcode = s; age = a;
	}
	
	void into(){
		cout << "My name is " << name << ", my id is " << id << endl;
	}
	
	friend class bestfriend;
	
	friend void hacker (student s);
};

void hacker (student s){
	cout << "Password released by hacker :" << s.passcode << endl;
}

class bestfriend {
	public:
	
	void sharingSecret(student s){
		cout << "Secrets being revealed by friend: \nPasscode: " << s.passcode << endl;
		cout << "Age: " << s.age << endl;
	}
};

int main(){
	
	student st; // this st object / variable of student would have name & id as the attribute

	st.name = "Kumar";
	st.id = 1;
	st.setPasss("0001", 21);
	
	st.into();
	
	bestfriend bff;
	bff.sharingSecret(st);
	
	hacker(st);
	
	// if class would have been declared and defined but no objects have been created
	// then no memory would have been allocated to blueprints.
	
	// 2nd situation 
	// class has no attribute 
	
}
