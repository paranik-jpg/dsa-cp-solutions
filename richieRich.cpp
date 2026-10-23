#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--) {
        int a, b, x;
        cin >> a >> b >> x;
        cout << (b - a) / x << endl;
    }
    
    return 0;
}
