#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        nums[0]*=nums[0];
        for(int i=n-1;i>0;i--){
            nums[i]*=nums[i];
            if (nums[i]<=nums[0]) {
                swap(nums[i],nums[0]);
            }
            else if (nums[i]>=nums[i+1]){
                swap(nums[i],nums[i+1]);
            }
        }
        return nums;
    }

int main(){
    vector<int> mine;
    mine = {-5,-3,-2,-1};
    vector<int> ans;
    ans = sortedSquares(mine);
    int n = ans.size();
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    return 0;
}
