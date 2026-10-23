#include <bits/stdc++.h>
using namespace std;

int solve(int n, string& s) {
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'x' && (i == 0 || s[i - 1] == 'x') && (i == n - 1 || s[i + 1] == 'x')) {
          ans++;
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string S;
    cin >> N;
    cin >> S;

    cout << solve(N, S) << '\n';

    return 0;
}
