#include<bits/stdc++.h>
using namespace std;

int countZero(vector<int>& toCount){
    int count = 0;
    int shaizi = toCount.size();
    for(int i=0;i<shaizi;i++){
        if (toCount[i] == 0) count ++;
    }
    return count;
}

int minimumCost(vector<int>& vect,int c){
    int sizzy = vect.size();
    sort(vect.begin(),vect.end());
    for(int i=sizzy-1;i>=0;i--){
        if(vect[i]<=c){
            vect[i]=0;
            for(int j=i-1;j>=0;j--){
                vect[j]*=2;
            }
        }
    }
    return (sizzy - countZero(vect));
}

int main(){
    int t, n, c, tval;
    vector<int> trashes;
    cin >> t;
    for(;t--;){
        cin >> n;
        cin >> c;
        for(;n--;){
            cin >> tval;
            trashes.push_back(tval);
        }
        cout << minimumCost(trashes,c) << endl;
        trashes.clear();
    }
    return 0; 
}