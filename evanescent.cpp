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

        string s;
        cin >> s;

        int len = 1;
        for(int i = 1; i < n; i++) {
            if(s[i] != s[i - 1]) {
              len++;
            }
        }

        int bestred = 0;
        for(int i = 1; i < n - 1; i++) {
          int L = s[i - 1];
          int M = s[i];
          int R = s[i + 1];

          if(L != M && M != R) {
            if(L == R) {
              bestred = max(bestred, 2);
            }
            else {
              bestred = max(bestred, 1);
            }
          }
        }

        cout << len - bestred << '\n';
    }

    return 0;
}
