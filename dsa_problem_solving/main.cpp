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

// int main() {
// 	int T;
// 	cin >> T;
// 	while (T--){

// 	char a[6];

// 	int flag = 0;

// 	for(int i = 0 ; i<6 ; i++)
// 		{
// 			cin >> a[i];
// 		}
// 	for(int i = 0 ; i<6 ; i++)
// 		{
// 			// cout << a[i] << " ";
// 			if(a[i] == 'W' && a[i + 1] == 'W' && a[i - 1] == 'W')
// 			{
// 				flag = 1;
// 			}
// 		}
// 	if(flag == 1){
// 		cout << "YES";
// 	}
// 	else {
// 		cout << "NO";
// 	}
// 	cout << endl;
// 	}
	
// }

// int main () {
// 	int T;
// 	cin >> T;
// 	while(T--){
// int target,close_range;
// 	cin >> target >> close_range;
// 	int a[target];
// 	int currentGun = 0;
// 	int switchCount = 0;
// 	for (int i = 0; i < target; i++)
// 	{
// 		cin >> a[i];
// 	}
// 	for (int i = 0; i < target; i++)
// 	{
// 		int requiredGun = a[i] <= close_range ? 0 : 1;

// 		if(requiredGun != currentGun){
// 			currentGun = requiredGun;
// 			switchCount++;
// 		}
// 	}
// 	cout << switchCount;
// 	cout << endl;
// 	}
// }

// int main (){
// 	int number_of_jar;
// 	double number_of_child;
// 	cin >> number_of_jar >>  number_of_child;

// 	int a[number_of_jar];
// 	int min_value;

// 	for (int i = 0; i <number_of_jar; i++)
// 	{
// 		cin >>  a[i];
// 	}

// 	for (int i = 0; i <number_of_jar; i++)
// 	{
// 		if(a[i]<number_of_child){
			
// 		}
// 		else{
// 		double sum = a[i] / number_of_child;
// 		int equal = floor(sum);
// 		int waste = a[i] - (equal * number_of_child);
// 			if(min_value<waste){
// 				min_value = waste;
// 			}
// 		}
		
// 	}
// 	cout << min_value;
// }



// int main (){
// 	int T;
// 	cin >> T;
// 	while(T--){
// 		int n,x;
// 		cin >> n >> x;
// 		if(n>x){
// 			cout << "NO" << endl;
// 		}
// 		else {
// 			cout << "YES" << endl;
// 		}
// 	}
// }


int main() {
    int T;
    cin >> T;
    while(T--){
        int N, X, Y;
        cin >> N >> X >> Y;

        int ans = 0;

        if (Y >= 2 * X) {
            ans = (N / 2) * Y + (N % 2) * X;
        } 
        else {
            ans = N * X;
        }

        cout << ans << endl;
    }
}
