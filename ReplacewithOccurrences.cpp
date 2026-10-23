#include<bits/stdc++.h>
using namespace std;

vector<int> arrayA(vector<int>& b){
    map<int,int> mpp;
    for(int i=0;i<b.size();i++){
        /*cout << b[i];*/
        mpp[b[i]]++;    
    }

    for(auto it : mpp){
        /*cout << it.first << " " << it.second << endl;*/
        if (it.first != it.second)  return {-1};
    }

    return b;
}

int main(){
    int t;
    cin >> t;
    for(;t--;){
        int n;
        cin >> n;
        vector<int> b;
        int bval;
        for(;n--;){
            cin >> bval;
            b.push_back(bval);
        }
        vector<int> a = arrayA(b);
        if(a[0] == -1) cout << -1 << endl;
        else {
            for(int i=0;i<a.size();i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0; 
}