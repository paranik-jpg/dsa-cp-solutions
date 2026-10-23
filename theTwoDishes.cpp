#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, s;
        cin >> n >> s;
        if(n >= s) {
            cout << s << endl;
        }
        else{
            cout << 2*n - s << endl;
        }
    }
    
    return 0;
}
