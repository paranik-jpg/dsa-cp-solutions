#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        vector<int> dp(n + 1, 0);

        int absMax = 0;
        for(int j = 1; j <= n; j++) {
            int maxi = 0;
            for(int i = 1; i <= j - 1; i++) {
                maxi = max(maxi, dp[i] + a[j] - j + i);
            }
            dp[j] = maxi;
            absMax = max(absMax, dp[j]);
        }

        cout << absMax << '\n';
    }

    return 0;
}
