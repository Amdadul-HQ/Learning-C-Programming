#include <bits/stdc++.h>
using namespace std;


int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        int k = N - X;  // number of profitable customers

        if (k <= 0) {
            cout << 0 << endl;
        } else {
            long long profit = 1LL * k * (k + 1) / 2;
            cout << profit << endl;
        }
    }

    return 0;
}