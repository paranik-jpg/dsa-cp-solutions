#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string S;
    cin >> N;
    cin >> S;

    vector<int> posx;

    for(int i = 0; i < N; i++) {
        if(S[i] == 'x') {
          posx.push_back(i + 1);
        }
    }

    int nox = posx.size();
    for(int k = 1; k <= N; k++) {
      int ans = (k <= nox) ? posx[k - 1] : N;
      cout << ans << '\n';
    }

    return 0;
}
