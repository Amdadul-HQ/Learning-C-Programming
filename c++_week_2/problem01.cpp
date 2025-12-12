#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[100], b[100];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int max_satisfaction = -1000000;

        for (int L = 0; L <= 100; L++) {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                if (b[i] <= L && a[i] > 0) sum += a[i];
            }
            int satisfaction = sum - L;
            if (satisfaction > max_satisfaction) max_satisfaction = satisfaction;
        }

        cout << max_satisfaction << endl;
    }

    return 0;
}
