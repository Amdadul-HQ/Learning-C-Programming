#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int boys = 0, girls = 0;
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                boys++;
            } else {
                girls++;
            }
            
            count++;
            
            if (boys > 2 * girls) {
                break;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}