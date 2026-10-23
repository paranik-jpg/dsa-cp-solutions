#include<bits/stdc++.h>
using namespace std;

vector<long long int> secretNumbers(long long int n){
    /*long long int limit = sqrt(n);*/
    int noOfDigits = (int)log10(n) + 1;
    vector<long long int> ans;
    long long int divisor = INT_MIN;
    for(long long int i=1;divisor<=n;i++){
        divisor = (1+pow(10, i));
        if(n%divisor == 0) { 
            if (((int)log10(divisor)+1) < noOfDigits) ans.push_back(divisor);
            if (((int)log10(n/divisor)+1) < noOfDigits) ans.push_back(n/divisor);
        }

        sort(ans.begin(),ans.end());
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    for(;t--;){
        long long int n;
        vector<long long int> ans;
        cin >> n;
        ans = secretNumbers(n);
        long long int pew = ans.size();
        if (pew == 0) cout << 0 << endl;
        else {
            cout << pew << endl;
            for(long long int i=0;i<pew;i++){
            cout << ans[i] << ' ';
            }
            cout << endl;
        }
    }
    return 0; 
}