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

      vector<int> first(n + 1, -1);
      vector<long long> dp(2 * n + 1, 0);

      for(int i = 1; i <= 2 * n; i++) {
        int x;
        cin >> x;

        dp[i] = dp[i - 1] + 1;

        if(first[x] == -1) {
          first[x] = i;
        }
        else {
          int l = first[x];
          long long len = i - l + 1;
          dp[i] = max(dp[i], dp[l - 1] + len * len);
        }
      }

      cout << dp[2 * n] << '\n';
    }

    return 0;
}
