#include <bits/stdc++.h>
using namespace std;

class Student
{
 public:
 char name[100];
 int roll;
 double gpa;
};

int main() {
	Student a;
	a.roll = 10;
	a.gpa = 4.5;
	char tmp[100] = "sakib";
	strcpy(a.name,tmp);

	cout << a.name << " " << a.roll << " " << a.gpa << endl;
}