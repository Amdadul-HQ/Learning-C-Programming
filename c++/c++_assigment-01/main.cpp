#include <bits/stdc++.h>
using namespace std;

// int main () {
// 	int n;
// 	cin >> n;
// 	int a[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		/* code */
// 		cin >> a[i];
// 	}
// 	sort(a,a+n);

// 	for (int i = 0; i < n; i++)
// 	{
// 		/* code */
// 		cout << a[i] << " ";
// 	}
// 	printf("\n");
// 	sort(a,a+n,greater<int>());

// 	for (int i = 0; i < n; i++)
// 	{
// 		/* code */
// 		cout << a[i] << " ";
// 	}
// }


// int* sort_it(int n) {
//     int* arr = new int[n];


//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }


//     sort(arr, arr + n, greater<int>());

//     return arr; 
// }

// int main () {
//     int n;
//     cin >> n;

//     int* result = sort_it(n);


//     for (int i = 0; i < n; i++) {
//         cout << result[i] << " ";
//     }

//     delete[] result;

//     return 0;
// }

// int main () {
//     string s;

//     while (getline(cin, s)) {

//         string t = "";
//         for (int i = 0; i < s.size(); i++) {
//             if (s[i] != ' ') {
//                 t += s[i];
//             }
//         }

//         sort(t.begin(), t.end());

//         cout << t << endl;
//     }

//     return 0;
// }


// class Student {
// public:
//     int id;
//     char name[105];
//     char section;
//     int marks;

//     Student(int id = 0, char name[] = "", char section = 'A', int marks = 0) {
//         this->id = id;
//         strcpy(this->name, name);
//         this->section = section;
//         this->marks = marks;
//     }
// };

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         Student s1, s2, s3;

//         cin >> s1.id >> s1.name >> s1.section >> s1.marks;
//         cin >> s2.id >> s2.name >> s2.section >> s2.marks;
//         cin >> s3.id >> s3.name >> s3.section >> s3.marks;

//         Student best = s1;

//         if (s2.marks > best.marks ||
//             (s2.marks == best.marks && s2.id < best.id)) {
//             best = s2;
//         }

//         if (s3.marks > best.marks ||
//             (s3.marks == best.marks && s3.id < best.id)) {
//             best = s3;
//         }

//         cout << best.id << " " << best.name << " " << best.section << " " << best.marks << endl;
//     }

//     return 0;
// }



int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        bool ok = false;

        for (int i = 0; i < n - 2; i++) {

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = a[i] + a[left] + a[right];

                if (sum == s) {
                    ok = true;
                    break;
                }
                else if (sum < s) {
                    left++;
                }
                else {
                    right--;
                }
            }

            if (ok) break;
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
