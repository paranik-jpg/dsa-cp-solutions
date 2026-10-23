#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {
      int N, P;
      cin >> N >> P;

      string S;
      cin >> S;

      int moveLeft = 0;

      for(int i = 1; i <= P; i++) {
        if(S[i] == 'R') {
          moveLeft++;
        }
      }

      int moveright = 0;

      for(int i = P; i <= N; i++) {
        if(S[i] == 'L') {
          moveright++;
        }
      }

      cout << min(moveLeft, moveright) << '\n';
     }

    return 0;
}
