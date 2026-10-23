#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k) {
    vector<int> a(n);
    
    for(int &x : a) {
        cin >> x;
    }
    
    bool ispossible;
    
    for(int x = 0; x <= k; x++) {
        int redStones = x;
        int blueStones = k - x;
        
        ispossible = true;
        
        for(int i = 0; i < n; i++) {
            if(a[i] > 0) {
                redStones += a[i];
                blueStones -= a[i];
            }
            else{
                redStones -= (-a[i]);
                blueStones += (-a[i]);
            }
            
            if(redStones < 0 || blueStones < 0) {
                ispossible = false;
                break;
            }
        }
        
        if(ispossible) {
            cout << "Yes" << endl;
            return;
        }
    }
    
    if(!ispossible) {
        cout << "No" << endl;
        return;
    }
}

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    
    return 0;
}
