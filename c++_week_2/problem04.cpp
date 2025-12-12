#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if (X < 4) {
            cout << "MILD" << endl;
        } 
        else if (X < 7) {  
            cout << "MEDIUM" << endl;
        } 
        else { 
            cout << "HOT" << endl;
        }
    }

    return 0;
}