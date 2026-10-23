#include<bits/stdc++.h>
using namespace std;

void possibleSequence(vector<int>& toCheck){
    vector<int> final;
    int siii = toCheck.size();
    int i = 0;
    int j = siii-1;
    final.push_back(toCheck[j]);
    cout << "R" ;
    final.push_back(toCheck[j-1]);
    cout << "R" ;
    j -= 2;
    while(i<=j){
        if(final[final.size()-1]>final[final.size()-2]) {
            if(toCheck[j]<final[final.size()-1]){
            final.push_back(toCheck[j]);
            cout << "R";
            j--;
        }
        else {
            final.push_back(toCheck[i]);
            cout << "L";
            i++;
        }
    }
    else {
        if(toCheck[j]>final[final.size()-1]){
            final.push_back(toCheck[j]);
            cout << "R";
            j--;
        }
        else {
            final.push_back(toCheck[i]);
            cout << "L";
            i++;
        }
    }
}
}

int main(){
    int t, n, nval;
    vector<int> nums;
    cin >> t;
    for(;t--;){
        cin >> n;
        for(;n--;){
            cin >> nval;
            nums.push_back(nval);
        }
        possibleSequence(nums);
        cout << endl;
        nums.clear();
    }
    return 0; 
}