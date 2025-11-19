#include <bits/stdc++.h>
using namespace std;

class Student
{
 public:
 char name[6];
 int roll;
 double gpa;
 Student (int roll,double gpa)
 {
 	this->roll = roll;
 	this->gpa = gpa;
 }
};

int main() {
	Student rahim(30,4.5);

	cout << rahim.roll << " " << rahim.gpa << endl; 
	// Student a,b,c;
	// cin >> a.name >> a.roll >> a.gpa;
	// cin >> b.name >> b.roll >> b.gpa;
	// cin >> c.name >> c.roll >> c.gpa;

	// cout << a.name << a.roll << a.gpa << endl;
	// cout << b.name << b.roll << b.gpa << endl;
	// cout << c.name << c.roll << c.gpa << endl;
}