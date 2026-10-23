#include <bits/stdc++.h>
using namespace std;

int solve(int n, string& s) {

    int totEmp = 0;
    bool maxConsisThree = false;

    for(int i = 0; i < n; i++) {
        if(i < n - 2) {
            if(s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
                maxConsisThree = true;
            }
        }
        if(s[i] == '.') {
            totEmp++;
        }
    }

    if(maxConsisThree) {
        return 2;
    }
    return totEmp;
}

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        cout << solve(n, s) << endl;
    }

    return 0;
}