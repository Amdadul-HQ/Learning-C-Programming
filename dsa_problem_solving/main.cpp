#include <bits/stdc++.h>
using namespace std;

// int main() {
// 	// your code goes here
// 	int n;
// 	int note = 2000;
// 	cin >> n;
	
// 	long long int sum = note * n;
	
// 	cout << sum / 500;
	
// }


int main(){
	int T;
	cin >> T;
	// cout << T;
	while(T--){
		int n;
		cin >> n;
		// cout << n << endl;
		double max = 4.0;
		double car = n / max;
		// cout << car << endl;
		cout << ceil(car) << endl;
	}
}