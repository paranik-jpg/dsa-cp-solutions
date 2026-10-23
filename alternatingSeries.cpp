#include<bits/stdc++.h>
using namespace std;

void goodAndBetter(int n){
    vector<int> ans(n);
    if(n==2){
        ans[0] = -1;
        ans[1] = 2;
        for(int i=0;i<n;i++){
            cout<< ans[i] << " ";
        }
        cout << endl;
    } else {

        for(int i=0;i<(n-1)/2;i++){
            ans[2*i]=-1;
            ans[2*i+1]=3;
        }

        if(n%2==1) ans[n-1] = -1;
        else{
            ans[n-1] = 2;
            ans[n-2] = -1;
        }

        for(int i=0;i<n;i++){
            cout<< ans[i] << " ";
        }
        cout<< endl;
    }
}

int main(){
    int t, n;
    cin >> t;
    for(;t--;){
        cin >> n;
        goodAndBetter(n);
    }
    return 0; 
}