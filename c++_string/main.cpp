#include <bits/stdc++.h>
using namespace std;

int main(){


	string s;
	getline(cin,s);
	stringstream ss(s);

	string word;

	while(ss >> word){
		// cout << word << endl;
		reverse(word.begin(),word.end());
		cout << word << " ";
	}

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