#include<bits/stdc++.h>
using namespace std;

int isPossible(vector<int>& toCheck){
    int namo = toCheck.size();
    if (toCheck[namo-1] > toCheck[namo-2]) return 0;
    return 1;
}

int main(){
    int t, n, tval;
    vector<int> trashes;
    cin >> t;
    for(;t--;){
        cin >> n;
        for(;n--;){
            cin >> tval;
            trashes.push_back(tval);
        }
        if (isPossible(trashes) == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
        trashes.clear();
    }
    return 0; 
}