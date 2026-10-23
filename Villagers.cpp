#include<bits/stdc++.h>
using namespace std;

long long minEmer(vector<int>& toFriend){
    int n = toFriend.size();
    long long ans = 0;
    sort(toFriend.begin(),toFriend.end());
    reverse(toFriend.begin(),toFriend.end());
    if (n%2==0) {
    for(int i=0;i<n;i=i+2){
        ans += max(toFriend[i],toFriend[i+1]);
    }

    return ans;
    } else {
        for(int i=0;i<n-1;i=i+2){
            ans += max(toFriend[i],toFriend[i+1]);
        }
    return(ans+toFriend[n-1]);    
    } 
}


int main(){
    int t, n, gval;
    vector<int> villagers;
    cin >> t;
    for(;t--;){
        cin >> n;
        for(;n--;){
            cin >> gval;
            villagers.push_back(gval);
        }
        long long ans = minEmer(villagers);
        cout << ans << endl;
        villagers.clear();
    }
    return 0; 
}