#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    int ans = 0;

    for(int b = 1; b <= n; b++) {
        ans += (floor(n/b)*floor(n/b));
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ans = solve(n);
        cout << ans << endl;
    }
    return 0;
}