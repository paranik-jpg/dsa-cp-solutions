#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
      int n, m;
      cin >> n >> m;

        string x;
        cin >> x;

        string s;
        cin >> s;

        int flag = false;
        int i = 0;
        while(i <= 5) {
            if(x.find(s) != string::npos) {
                flag = true;
                break;
              }
          x += x;
          i++;
        }

        if(flag) {
            cout << i << '\n';
        }
        else {
          cout << -1 << '\n';
        }
    }

    return 0;
}
