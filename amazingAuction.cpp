#include <bits/stdc++.h>
using namespace std;

long solve(int n, int k) {
    vector<int> a(n), c(n);
    
    for(int &x : a) {
        cin >> x;
    }
    
    for(int &x : c) {
        cin >> x;
    }
    
    long maxProfit = INT_MIN;

    for(int candi = 0; candi < n; candi++) {
        long y = a[candi];

        vector<long> cost;

        for(int i = 0; i < n; i++) {
            if(a[i] >= y) {
                cost.push_back(0);
            }
            else {
                cost.push_back((y - a[i])*c[i]);
            }
        }

        sort(cost.begin(), cost.end());

        long totCost = 0;
        for(int i = 0; i < k + 1; i++) {
            totCost += cost[i];
        }

        long profit = y*k - totCost;

        maxProfit = max(profit, maxProfit);
    }

    return maxProfit;
}

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    
    return 0;
}
