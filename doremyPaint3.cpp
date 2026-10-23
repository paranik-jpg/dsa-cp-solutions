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

      map<int, int> mpp;

      for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mpp[x]++;
      }

      if(mpp.size() >= 3) {
        cout << "No" << '\n';
      }
      else {
        if(abs(mpp.begin()->second - mpp.rbegin()->second) <= 1) {
          cout << "Yes" << '\n';
        }
        else {
          cout << "No" << '\n';
        }
      }
    }

    return 0;
}
