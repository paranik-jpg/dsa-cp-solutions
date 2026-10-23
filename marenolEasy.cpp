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

      string a;
      cin >> a;

      string b;
      cin >> b;

      int aEven = 0;
      int aOdd = 0;
      int bEven = 0;
      int bOdd = 0;

      for(int i = 0; i < n; i++) {
        if(i % 2) {
          aOdd += (a[i] == '1');
          bOdd += (b[i] == '1');
        }
        else {
            aEven += (a[i] == '1');
          bEven += (b[i] == '1');
        }
      }

      if(aOdd == bOdd && aEven == bEven) {
        cout << "YES" << '\n';
      }
      else {
        cout << "NO" << '\n';
      }
    }

    return 0;
}
