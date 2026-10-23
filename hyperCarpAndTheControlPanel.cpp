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

      vector<int> a(n + 2);
      a[0] = n + 1;

      int without_swap = 0;
      for(int i = 1; i < n + 1; i++) {
        cin >> a[i];
        if(a[i] != a[i - 1]) {
          without_swap++;
        }
      }

      a[n + 1] = n + 2;

      int contri = 0;
      for(int i = 1; i < n; i++) {
        if(a[i] != a[i + 1] && a[i] != a[i + 2] && a[i + 1] != a[i - 1]) {
            if(a[i] == a[i - 1] && a[i + 1] == a[i + 2]) {
              contri = 2;
              break;
            }
            else if(a[i] == a[i - 1] || a[i + 1] == a[i + 2]) {
              contri = 1;
            }
        }
      }

      cout << without_swap + contri << '\n';
    }

    return 0;
}
