#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 2 * (1e5) + 5;

vector<long long> pw(MAXN);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pw[0] = 1;

    for(int i = 1; i < MAXN; i++) {
      pw[i] = (2 * pw[i - 1]) % MOD;
    }

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int distinct = 0;
        int consecutive = 0;
        int cntMinus = 0;

        bool first = true;
        long long last = 0;

        for(int i = 0; i < n; i++) {
            long long x;
          cin >> x;

          if(x == -1) {
            cntMinus++;
            continue;
          }

          if(first || x != last) {
            if(!first && x == last + 1) {
              consecutive++;
            }

            distinct++;
            last = x;
            first = false;
          }

        }

        long long ans = pw[n - distinct - (cntMinus > 0)];

        if(cntMinus) {
          ans = ans * (consecutive + 1LL) % MOD;
        }

        cout << ans << '\n';
    }

    return 0;
}
