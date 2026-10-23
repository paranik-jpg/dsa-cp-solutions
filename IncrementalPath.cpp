#include<bits/stdc++.h>
using namespace std;

vector<int> Blackiis(string& comm, vector<int>& mVec){
    int commSize = comm.length();
    int blacked = mVec.size();

    vector<int> workingCells(0,1000000001);

    int j = 0;
    for(int i=1;j<blacked;i++){
        if(i == mVec[j]) {
            workingCells[i] = 1;
            j++;
        }
    }

   for(int i=1;i<commSize();i++){
        for(int j=1;j<=i;j++){
            if()
        }
   }
}

int main(){
    int t;
    cin >> t;
    for(;t--;){
        int n,m;
        cin >> n;
        cin >> m;
        vector<int> mVec;
        int mval;
        string comm;
        char commi;
        for(;n--;){
            cin >> commi;
            comm.push_back(commi);
        }
        for(;m--;){
            cin >> mval;
            mVec.push_back(mval);
        }
        vector<int> ans;
        ans = Blackiis(comm, mVec);
        for(int i=0; i<ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0; 
}