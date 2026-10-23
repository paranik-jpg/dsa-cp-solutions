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

      bool isPrime = true;
      int divisors = 0;
      for(int i = 1; i * i <= n + 1; i++) {
        divisors += ((n + 1) % i == 0);
        if(divisors > 1) {
          isPrime = false;
          break;
        }
      }

      if(isPrime) {
        cout << "YES" << '\n';
      }
      else {
        cout << "NO" << '\n';
      }
    }

    return 0;
}
