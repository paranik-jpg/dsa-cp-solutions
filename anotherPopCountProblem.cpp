#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k) {
    int max_popcount = 0;
    int current_cost = 1;

    while(current_cost <= n) {

        int bits_to_buy = min(k, n/current_cost);

        max_popcount += bits_to_buy;
        n -= (bits_to_buy*current_cost);
        current_cost *= 2;
    }

    return max_popcount;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        int ans = solve(n, k);
        cout << ans << endl;
    }
    return 0;
}