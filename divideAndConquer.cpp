#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int x, y;
        cin >> x >> y;
        if(x % y) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}