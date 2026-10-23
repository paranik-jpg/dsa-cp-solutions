#include <bits/stdc++.h>
using namespace std;

int solve(int x, int y) {
    int tim = 0;
    while(x > y) {
        tim += (x + 9) / 10;
        x--;
    }
    return tim;
}

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        cout << solve(x, y) << endl;
    }
    return 0;
}
