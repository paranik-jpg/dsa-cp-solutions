#include<bits/stdc++.h>
using namespace std;

string altustring(string& action, int n, int k){
    string ans(n,'+');
    int noZero = 0;
    int noOne = 0;

    for(int i=0;i<action.length();i++){
        if (action[i]=='0') noZero++;
        if (action[i]=='1') noOne++;
    }

    noZero += (k - action.length());

    int noTwo = k - noZero - noOne;

    for(int i=0;i<noZero;i++){
        ans[i] = '-';
    }

    /*cout << ans << endl;*/

    for(int i=n-noOne;i<n;i++){
        ans[i] = '-';
    }

    if (noTwo <= 0) return ans;

    if (noTwo > 0 && n-k <=0 ) {
        ans[noZero] = '-';
        return ans;
    }

    int start = noZero;
    int end = n - 1 - noOne;

    while(noTwo !=0){
        ans[start] = '?';
        ans[end] = '?';
        noTwo--;
        start++;
        end--;
    }

    return ans;
}

int main(){
    int t;
    cin >> t;
    for(;t--;){
        int n,k,num;
        cin >> n;
        cin >> k;
        cin >> num;
        string action;
        action = to_string(num);
        string ans;
        ans = altustring(action, n, k);
        cout << ans << endl;
    }
    return 0; 
}