#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
      string s;
      cin >> s;

      int first0 = s.find('0');
      s.erase(first0, 1);

      int first1 = s.find('1');
      s.erase(first1, 1);

      cout << s << '\n';
    }

    return 0;
}
