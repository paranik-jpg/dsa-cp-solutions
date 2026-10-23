#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if(n < 2 * k) {
            cout << -1 << '\n';
            continue;
        }

        int ops = 0;
        for(int i = 0; i < k; i++) {
          ops += (s[i] == 'L');
        }

        for(int i = n - k; i < n; i++) {
            ops += (s[i] == 'R');
        }

        cout << ops << '\n';
    }

    return 0;
}
