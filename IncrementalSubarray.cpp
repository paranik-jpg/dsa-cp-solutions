#include<bits/stdc++.h>
using namespace std;

int numberOfSubarrays(int n,int m,vector<int>& mVec){
    if(m==1) return (n-mVec[0]+1);

    if(mVec[0]==1 && mVec[1]==1) return 1;

    for(int i=0;i<m-1;i++){
        if(mVec[i] != 1 && mVec[i+1] == 1) return 1;
    }
 
    int lastinconse = mVec[0] + m - 1;

    return n - lastinconse + 1;
}

int main(){
    int t;
    cin >> t;
    for(;t--;){
        int n,m;
        cin >> n;
        cin >> m;
        int ogm = m;
        vector<int> mVec;
        int mval;
        for(;m--;){
            cin >> mval;
            mVec.push_back(mval);
        }
        int ans;
        ans = numberOfSubarrays(n,ogm,mVec);
        cout << ans<< endl;
    }
    return 0; 
}