#include <bits/stdc++.h>
using namespace std;

int solve(int n, int x) {
    vector<int> a;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }

    int minVol = a[0];
    
    for(int i = 1; i < n; i++) {
        minVol = max(minVol, a[i] - a[i - 1]);
    }

    minVol = max(minVol, 2*(x - a[n - 1]));

    return minVol;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;
        cout << solve(n, x) << endl;
    }
    return 0;
}