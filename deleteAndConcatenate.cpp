#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
      int n, c;
      cin >> n >> c;

      vector<long long> a(n);

      int pos = 0;

      for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] -= c;

        pos += (a[i] > 0);
      }

      sort(a.begin(), a.end(), greater<long long>());

      int need = max(pos, (n + 1) / 2);

      long long ans = 0;

      for(int i = 0; i < need; i++) {
        ans += a[i];
      }

      cout << ans << '\n';
    }

    return 0;
}
