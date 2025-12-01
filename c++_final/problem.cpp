#include <bits/stdc++.h>
using namespace std;

// int main() {

//     int T;
//     cin >> T;
//     while (T--) {
//         string S, X;
//         cin >> S >> X;

//         string result = "";
//         int n = S.size(), m = X.size();

//         for (int i = 0; i < n; ) {
//             if (i + m <= n && S.substr(i, m) == X) {
//                 result.push_back('#');  
//                 i += m;                
//             } else {
//                 result.push_back(S[i]); 
//                 i++;
//             }
//         }

//         cout << result << "\n";
//     }

//     return 0;
// }

// int main() {
//     string S;
//     getline(cin, S);

//     stringstream ss(S);
//     string word;
//     bool found = false;

//     while (ss >> word) {
//         if (word == "Jessica") {
//             found = true;
//             break;
//         }
//     }

//     cout << (found ? "YES" : "NO") << endl;

//     return 0;
// }


// class Student {
// public:
//     string nm;
//     int cls;
//     char s;
//     int id;
// };

// int main() {
//     int n;
//     cin >> n;

//     Student a[n];

//     for (int i = 0; i < n; i++)
//     {
//     	cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
//     }

//     int i = 0, j = n - 1;
//     while (i < j) {
//         swap(a[i].s, a[j].s);
//         i++;
//         j--;
//     }

// 	for (int i = 0; i < n; i++) {
// 	     cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << "\n";
// 	 }
// }


// class Student {
// public:
//     string nm;
//     int cls;
//     char s;
//     int id;
//     int math;
//     int eng;
// };

// bool cmp(Student a, Student b) {
//     int totalA = a.math + a.eng;
//     int totalB = b.math + b.eng;

//     if (totalA == totalB) {
//         return a.id < b.id;
//     }
//     return totalA > totalB; 
// }

// int main() {
//     int n;
//     cin >> n;

//     Student a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math >> a[i].eng;
//     }

//     sort(a, a + n, cmp);

//     for (int i = 0; i < n; i++) {
//         cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " 
//              << a[i].id << " " << a[i].math << " " << a[i].eng << "\n";
//     }
// }

class Student {
public:
    string nm;
    int cls;
    char s;
    long long id;
    int math;
    int eng;
};

bool cmp(Student a, Student b) {
    if (a.eng == b.eng) {
        if (a.math == b.math) {
            return a.id < b.id; 
        }
        return a.math > b.math; 
    }
    return a.eng > b.eng; 
}

int main() {
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math >> a[i].eng;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " "
             << a[i].id << " " << a[i].math << " " << a[i].eng << "\n";
    }
}