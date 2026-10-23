#include<bits/stdc++.h>
using namespace std;

long long maxEvenSum(long long a,long long b){
    long long maxi = -1;

    for(long long k=1;k<=(long long)sqrt(b);k++){
        if (b%k==0 && ((a*k + b/k)%2 == 0)) maxi = max(maxi,a*k + b/k);
        if (b%k==0 && ((a*b/k + k)%2 == 0)) maxi = max(maxi,a*b/k + k);
    }
    
    return maxi;
}

int main(){
    int t;
    cin >> t;
    for(;t--;){
        long long a,b;
        cin >> a;
        cin >> b;
        cout << maxEvenSum(a,b) << endl;
    }
    return 0; 
}