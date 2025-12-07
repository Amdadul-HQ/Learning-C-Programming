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


// int main(){
// 	int T;
// 	cin >> T;
// 	// cout << T;
// 	while(T--){
// 		int n;
// 		cin >> n;
// 		// cout << n << endl;
// 		double max = 4.0;
// 		double car = n / max;
// 		cout << ceil(car) << endl;
// 	}
// }


// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N; 
//         // cout << N << endl;

//         int rooms = 0; 

//         for (int i = 0; i < N; i++) {
//             int members;
//             cin >> members;
//             rooms += (members + 1) / 2; 
//         }

//         cout << rooms << endl;
//     }

//     return 0;
// }

int main() {
	int T;
	cin >> T;
	while (T--){

	char a[6];

	int flag = 0;

	for(int i = 0 ; i<6 ; i++)
		{
			cin >> a[i];
		}
	for(int i = 0 ; i<6 ; i++)
		{
			// cout << a[i] << " ";
			if(a[i] == 'W' && a[i + 1] == 'W' && a[i - 1] == 'W')
			{
				flag = 1;
			}
		}
	if(flag == 1){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	cout << endl;
	}
	
}
