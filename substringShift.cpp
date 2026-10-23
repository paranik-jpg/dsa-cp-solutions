#include <bits/stdc++.h>
using namespace std;

void solve(int N, string& S) {

    if(N == 1) {
        if(S[0] == 'z') {
            S[0] = 'a';
        }
        return;
    }

    int firstPosition = -1;

      for(int i = 0; i < N; i++) {
        if(S[i] == 'z') {
          firstPosition = i;
          break;
        }
      }

      if(firstPosition == N - 1) {
        S[N - 1] = 'a';
        return;
      }

      if(firstPosition == -1) {
        return;
      }

      int lastPosition = N - 1;
      for(int i = firstPosition + 1; i < N; i++) {
        if(S[i] != 'z') {
          lastPosition = i - 1;
          break;
        }
      }

      for(int i = firstPosition; i <= min(N - 1, lastPosition); i++) {
        S[i] = 'a';
      }

      return;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {
        int N;
      cin >> N;

      string S;
      cin >> S;

      string newS = S;

      solve(N, newS);

      cout << newS << '\n';
    }

    return 0;
}
