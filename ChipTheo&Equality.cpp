#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arrayA){
    int n = arrayA.size();
    unordered_map<int,int> cnt;
    unordered_map<int, long long> sum;

    for(int x:arrayA){
        unordered_map<int,int> dist;

        int curr = x;
        int ops = 0;

        while(!dist.count(curr)){
            dist[curr] = ops;
            if(curr%2==0) curr /= 2;
            else curr++;
            ops++;
        }

        for(auto it : dist){
            int v = it.first;
            int c = it.second;
            cnt[v]++;
            sum[v] += c;
        }
    }

    long long ans = LLONG_MAX;
    for(auto it : cnt){
            int v = it.first;
            if(cnt[v] == n) ans = min(ans,sum[v]);
    }

    return ans;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, val;
    vector<int> arrayA;
    cin >> t;
    for(;t--;){
        cin >> n;
        arrayA.clear();
        for(;n--;){
            cin >> val;
            arrayA.push_back(val);
        }
        cout << solve(arrayA) << endl;
    }
    return 0;
}