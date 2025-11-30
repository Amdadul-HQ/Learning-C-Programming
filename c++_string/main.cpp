#include <bits/stdc++.h>
using namespace std;

class Student {
public:
	string name;
	int roll;
	Student (string name, int roll) {
		this->name = name;
		this->roll = roll;
	}
	void hello () {
		cout << name << endl;
	}
	void age () {
		cout << roll << endl;
	}
};

int main(){
   
   Student rimon("Rimon HQ",23);

   rimon.hello();
   rimon.age();

   // cout << rimon.name << endl;
   // cout << rimon.roll << endl;

	// string s;
	// getline(cin,s);
	// stringstream ss(s);

	// string word;

	// ss >> word;
	// cout << word;

	// while(ss >> word){
	// 	// cout << word << endl;
	// 	reverse(word.begin(),word.end());
	// 	cout << " " << word;
	// }

	// cin >> s ;

	// for (char c : s)
	// {
	// 	/* code */
	// 	cout << c << endl;
	// }



	// sort(s.begin(),s.end(),greater<char>());

	// cout << s ;




	//type one
	// string s = "hello";


	//type two
	// string s("hello");

	//type three
	// string s ("hello",3);

	// type four
	// string s = "hello";
	// string t(s,3);

	// type five
	// string s(5,'A');

	// cout << s << endl;
	// cout << t << endl;
}