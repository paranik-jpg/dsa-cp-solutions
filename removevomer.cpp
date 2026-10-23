#include <bits/stdc++.h>
using namespace std;

int solve(int n, string& s) {
    int changes = 0;

    for(int i = 0; i < n - 1; i++) {
        if(s[i] != s[i + 1]) {
            changes++;
        }
    }

    if(changes == 1) {
        return 2;
    }

    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(n, s) << endl;
    }
    return 0;
}