#include <bits/stdc++.h>
using namespace std;

int solve(int n, int c) {
    vector<int> a;
    vector<int> b;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        b.push_back(num);
    }

    int ans = INT_MAX;
    int cost = 0;

    bool flag = 1;

    for(int i = 0; i < n; i++) {
        if(a[i] < b[i]) {
            flag = 0;
            break;
        }
        cost += (a[i] - b[i]);
    }

    if(flag) {
        ans = min(ans, cost);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    flag = 1;
    cost = c;

    for(int i = 0; i < n; i++) {
        if(a[i] < b[i]) {
            flag = 0;
            break;
        }
        cost += (a[i] - b[i]);
    }

    if(flag) {
        ans = min(ans, cost);
    }

    if(ans != INT_MAX) {
        return ans;
    }

    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, c;
        cin >> n >> c;
        int ans = solve(n, c);
        cout << ans << endl;
    }
    return 0;
}