#include<bits/stdc++.h>
using namespace std;

string homeworkString(int lena, int lenb, string& a, string& b, string& c){
    int lenc = lenb;
    int n = lena + lenb;
    string toReturn(n,'*');
    string dWaale;
    string vWaale; 
    int cntV = 0;
    for(int i=0;i<lenc;i++){
        if(c[i] == 'V') {
            cntV++;
            vWaale.push_back(b[i]);
        }
        else dWaale.push_back(b[i]);
    }

    reverse(vWaale.begin(),vWaale.end());

    int i=0;
    for(;i<cntV;){
        toReturn[i] = vWaale[i];
        i++;
    }

    for(;i<(cntV+lena);){
        toReturn[i] = a[i-cntV];
        i++;
    }

    for(;i<n;){
        toReturn[i] = dWaale[i-cntV-lena];
        i++;
    }

    return toReturn;
}

int main(){
    int t;
    string a, b, c;
    cin >> t;
    for(;t--;){
        int lena, lenb;
        string a, b, c, ans;
        cin >> lena;
        cin >> a;
        cin >> lenb;
        cin >> b;
        cin >> c;
        ans = homeworkString(lena, lenb, a, b, c);
        cout << ans << endl;
    }
    return 0; 
}