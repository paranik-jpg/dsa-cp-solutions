#include<bits/stdc++.h>
using namespace std;

int noOfIterations(vector<int>& nums1, vector<int>& nums2, int n){
    int lessCnt = 0;
    int moreCnt = 0;
    if(n==1){
        if(nums1[0]>nums2[0]) return (nums1[0]-nums2[0]+1);
        else return 1;
    }
    for(int i=0;i<n;i++){
        if(nums1[i]<nums2[i]) {
            lessCnt = lessCnt + nums2[i] - nums1[i];
        }
        else{
            moreCnt = moreCnt + nums1[i] - nums2[i];
        } 
    }
    int ans;
    if(lessCnt>moreCnt) ans = moreCnt + 1;
    else if (moreCnt == 0) ans = 1;
    else ans = lessCnt + 2;

    return ans;
}

int main(){
    int t, nunu, aval, bval;
    vector<int> vecA;
    vector<int> vecB;
    cin >> t;
    for(;t--;){
        cin >> nunu;
        int n = nunu;
        for(;n--;){
            cin >> aval;
            vecA.push_back(aval);
        }
        n = nunu;
        for(;n--;){
            cin >> bval;
            vecB.push_back(bval);
        }
        n = nunu;
        int toPrint = noOfIterations(vecA,vecB,n);
        cout << toPrint << endl;
        vecA.clear();
        vecB.clear();
    }
    return 0; 
}