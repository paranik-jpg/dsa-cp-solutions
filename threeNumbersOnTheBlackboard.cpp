#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> vec = {a, b, c};
        sort(vec.begin(), vec.end());

        cout << min(vec[2] - vec[0], vec[1]) << '\n';
    }

    return 0;
}
