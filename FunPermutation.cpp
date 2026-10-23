#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(;t--;){
        int itn, pval;
        cin >> itn;
        int n = itn;
        for(;itn--;){
            cin >> pval;
            if (n==2) {
                if(pval == 2) cout << 1 << " ";
                else cout << 2 << " ";
            }
            else {
                if(pval == n) cout << pval << " ";
                else cout << (n-pval) << " ";
            }
        }
        cout << endl;
    }
    return 0; 
}