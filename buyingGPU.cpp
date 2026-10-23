#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {
      int X, Y, Z;
      cin >> X >> Y >> Z;

        if(Y >= Z) {
          cout << -1 << '\n';
        }
        else {
            int ans = (X % (Z - Y) == 0) ? X / (Z - Y) : (X / (Z - Y)) + 1;
          cout << ans << '\n';
        }
    }

    return 0;
}
