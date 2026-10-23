#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& toCheck){
    set<int> st(toCheck.begin(),toCheck.end());
    if(toCheck.size() == st.size()) return false;
    return true;
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
        if (isPossible(trashes)) cout << "YES" << endl;
        else cout << "NO" << endl;
        trashes.clear();
    }
    return 0; 
}