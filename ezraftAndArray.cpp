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

        if(n == 2) {
          cout << "-1" << '\n';
          continue;
        }

        if(n == 1) {
          cout << "1" << '\n';
          continue;
        }

        vector<long long> vec = {1, 2, 3};
        long long sum = 6;

        while((int)vec.size() < n) {
          vec.push_back(sum);
          sum *= 2;
        }

        for(long long x : vec) {
          cout << x << " ";
        }

        cout << '\n';
    }

    return 0;
}
