#include <bits/stdc++.h>
using namespace std;

int solve(int x) {
    int y = 1;

    while(x > 0) {
        y *= 10;
        x /= 10;
    }

    return y + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int x;
        cin >> x;
        cout << solve(x) << endl;
    }
    return 0;
}