#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,k,x;
    cin >> t;
    for(;t--;){
        cin >> k;
        cin >> x;
        cout << x*pow(2,k) << endl;
    }
    return 0; 
}