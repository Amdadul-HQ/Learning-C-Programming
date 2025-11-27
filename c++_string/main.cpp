#include <bits/stdc++.h>
using namespace std;

int main(){


	string s;

	cin >> s ;

	sort(s.begin(),s.end(),greater<char>());

	cout << s ;




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