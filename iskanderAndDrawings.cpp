#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int longest = 0;
        int curr = 0;

        for(char c : s) {
            if(c == '#') {
              curr++;
              longest = max(longest, curr);
            }
            else {
              curr = 0;
            }
        }

        cout << (longest + 1)/ 2 << '\n';
    }


    return 0;
}
