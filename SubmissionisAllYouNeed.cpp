#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, nval;
    cin >> t;
    for(;t--;){
        cin >> n;
        int sum = 0;
        for(;n--;){
            cin >> nval;
            sum += max(nval,1);
        }
        cout << sum << endl;
    }
    return 0; 
}