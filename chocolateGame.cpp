#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int sum = 0;
        int odd_count = 0;
        for (int i = 0; i < n; i++) {
          int x;
          cin >> x;
          sum += x;
          odd_count += (x % 2);
        }

        int alice;
        if (sum % 2 == 0) {
          alice = sum - odd_count / 2;
        }
        else {
          alice = odd_count / 2;
        }

        cout << alice << '\n';
    }

    return 0;
}
