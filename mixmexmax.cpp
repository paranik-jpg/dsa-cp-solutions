#include<bits/stdc++.h>
using namespace std;

int mex(vector<int>& vect, int ini){
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i=ini;i<(3+ini);i++){
        if(vect[i] == 0) cnt0 = 1;
        else if(vect[i] == 1) cnt1 = 1;
        else if(vect[i] == 2) cnt2 = 1;
    }

    if(!cnt0) return 0;
    else if(!cnt1) return 1;
    else if(!cnt2) return 2;
    else return 3;
}

bool isPossible(vector<int>& vect){
    int n = vect.size();
    bool ans = true;
    for(int i=0;i<n-2;i++){
            if( max(vect[i],max(vect[i+1],vect[i+2])) > 3 ) {
                ans = false;
                break;
            } else if ( vect[i]>=0 && vect[i+1]>=0 && vect[i+2]>=0 && (mex(vect,i) != max(vect[i],max(vect[i+1],vect[i+2])) - min(vect[i],min(vect[i+1],vect[i+2])))) {
                ans = false;
                break;
            } else {

            }
    }
    return ans;
}

int main(){
    int t, n, num;
    vector<int> vec;
    cin >> t;
    for(;t--;){
        cin >> n;
        for(;n--;){
            cin >> num;
            vec.push_back(num);
        }
        bool jawab = isPossible(vec);
        if(jawab) cout << "YES" << endl;
        else cout << "NO" << endl;
        vec.clear();
    }
    return 0; 
}