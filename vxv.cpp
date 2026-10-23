#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        set<long long> answers;
        for (int k = 1; ; ++k) {
            long long p = 1;
            // Compute 10^k without overflow
            for (int i = 0; i < k; ++i) {
                if (p > n / 10) { // Avoid overflow
                    p = -1;
                    break;
                }
                p *= 10;
            }
            if (p == -1) break;
            long long m = 1 + p;
            if (m > n) break; // No point in continuing
            if (n % m == 0) {
                long long x = n / m;
                // Digits in x, Digits in x*p
                int d1 = to_string(x).size();
                int d2 = to_string(x * p).size();
                if (d1 < d2) answers.insert(x);
            }
        }
        if (answers.empty())
            cout << 0 << endl;
        else {
            cout << answers.size() << endl;
            for (auto v : answers) cout << v << ' ';
            cout << endl;
        }
    }
    return 0;
}
