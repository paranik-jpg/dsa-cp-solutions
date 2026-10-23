#include <bits/stdc++.h>
using namespace std;

int solve (int n, string& s) {
    int count = 0;

    for (int s0 = 0; s0 < 2; s0++) {
      for (int s1 = 0; s1 < 2; s1++) {
        int cur0 = s0;
        int cur1 = s1;
        int ok = true;

        for (int i = 0; ok && i < n; i++) {
            int val = (i % 2 == 0) ? cur0 : cur1;
            if (s[i] != '?' && s[i] - '0' != val) {
              ok = false;
            }
            if (i % 2 == 0) {
              cur0 = 1 - cur0;
            }
            else {
              cur1 = 1 - cur1;
            }
        }

        if (ok) {
          count++;
        }
      }
    }

    return count;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
      int n;
      cin >> n;

      string s;
      cin >> s;

      cout << solve(n, s) << '\n';
    }

    return 0;
}
