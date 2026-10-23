#include <bits/stdc++.h>
using namespace std;

long long solve (long long n, long long m, long long x, long long y, vector<int>& a, vector<int>& b) {
    int p1 = 0;
    int p2 = 0;
    int both = 0;
  long long ans = 0;

  while ((p1 < x || p2 < y) && p1 + p2 - both < n + m) {
    if (p1 == x || p1 - both >= n) {
        if (p2 == y || p2 - both >= m) {
          break;
        }
        ans += b[p2];
        p2++;
    }
    else if (p2 == y || p2 - both >= m) {
        if (p1 == x || p1 - both >= n) {
          break;
        }
        ans += a[p1];
        p1++;
    }
    else {
        if (a[p1] == b[p2]) {
          ans += a[p1];
          p1++;
          p2++;
          both++;
        }
        else if (a[p1] > b[p2]) {
          ans += a[p1];
          p1++;
        }
        else {
          ans += b[p2];
          p2++;
        }
    }
  }

  return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
      int n, m, x, y;
      cin >> n >> m >> x >> y;

      vector<int> a(x);
      vector<int> b(y);

      for (int i = 0; i < x; i++) {
        cin >> a[i];
      }

      for (int i = 0; i < y; i++) {
        cin >> b[i];
      }

      reverse(a.begin(), a.end());
      reverse(b.begin(), b.end());

      long long ans = max(solve(n, m - 1, x, y, a, b), solve(n - 1, m, x, y, a, b));

      cout << ans << '\n';
    }

    return 0;
}
