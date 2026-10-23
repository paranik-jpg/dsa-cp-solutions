#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<int> a(n);

    vector<int> pref1(n), pref2(n), pref3(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];

        if(i) {
            pref1[i] = pref1[i - 1];
            pref2[i] = pref2[i - 1];
            pref3[i] = pref3[i - 1];
        }

        if(a[i] == 1) {
            pref1[i]++;
        } else if(a[i] == 2) {
            pref2[i]++;
        } else {
            pref3[i]++;
        }
    }

    vector<int> F(n);
    for(int i = 0; i < n; i++) {
        F[i] = pref1[i] + pref2[i] - pref3[i];
    }

    vector<int> suffSum(n - 1);

    suffSum[n - 2] = F[n - 2];
    for(int i = n - 3; i >= 1; i--) {
        suffSum[i] = max(suffSum[i + 1], F[i]);
    }

    for(int i = 0; i < n - 2; i++) {
        bool leftGood = (pref1[i] >= pref2[i] + pref3[i]);

        if(!leftGood) {
            continue;
        }

        if(F[i] <= suffSum[i + 1]) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
    return;
}

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}