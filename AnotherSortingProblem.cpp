#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arrayA){
    int n = arrayA.size();
    int k = 0;

    for(int i=0;i<n-1;i++){
        if(arrayA[i]>arrayA[i+1]) k = max(k, arrayA[i]-arrayA[i+1]);
    }

    if(k==0) return true;

    vector<int> state(n, -1);

    for(int i=0;i<n-1;i++){
        if(arrayA[i]>arrayA[i+1]){
            if(state[i]==1 || state[i+1]==0) return false;
            state[i] = 0;
            state[i+1] = 1; 
        }

        else if(arrayA[i]+k>arrayA[i+1]){
            if(state[i]==1){
                if(state[i+1]==0) return false;
                state[i+1] = 1;
            }
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, val;
    vector<int> arrayA;
    cin >> t;
    for(;t--;){
        cin >> n;
        arrayA.clear();
        for(;n--;){
            cin >> val;
            arrayA.push_back(val);
        }
        if (isPossible(arrayA)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}