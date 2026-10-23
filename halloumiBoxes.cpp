#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k) {
    vector<int> a;

    bool isSorted = true;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if(i != 0 && num < a.back()) {
            isSorted = false;
        }
        a.push_back(num);
    }

    if(n == 1) {
        cout << "YES" << endl;
        return;
    }

    if(isSorted) {
        cout << "YES" << endl;
        return;
    }

    if(k == 1) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}