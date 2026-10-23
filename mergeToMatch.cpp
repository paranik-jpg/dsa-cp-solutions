#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
      int n, m;
      cin >> n >> m;

      vector<int> a(n);
      vector<int> b(m);

      for(int i = 0; i < n; i++) {
        cin >> a[i];
      }

      for(int i = 0; i < m; i++) {
        cin >> b[i];
      }

      sort(a.begin(), a.end());
      sort(b.begin(), b.end());

      if(n < 2 * m) {
        cout << "NO" << '\n';
        continue;
      }

      bool flag = false;
      for(int i = 0; i < m; i++) {
        if(b[i] < a[i] || a[n - m + i] < b[i]) {
          cout << "NO" << '\n';
          flag = true;
          break;
        }
      }

      if(!flag) {
        cout << "YES" << '\n';
      }

    }

    return 0;
}
