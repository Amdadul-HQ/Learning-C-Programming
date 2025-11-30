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

class Cricter {
public:
	string country;
	int jersy;
	Cricter(string country, int jersy){
		this->country = country;
		this->jersy = jersy;
	}
};

int main(){

	Cricter* dhoni = new Cricter("india",1566);
    Cricter* kholi = new Cricter("india",18);
	// cout << (*dhoni).country << endl;
	// cout << (*dhoni).jersy << endl;
	// kholi = dhoni;

	*kholi = *dhoni; 

	delete dhoni;

    cout << (*kholi).country << endl;
	cout << (*kholi).jersy << endl;
   
   // Student rimon("Rimon HQ",23);

   // rimon.hello();
   // rimon.age();

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