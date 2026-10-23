#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> freq(102, 0);

    int mostFreq = 0;

    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      freq[x]++;
      if(freq[x] > mostFreq) {
        mostFreq = freq[x];
      }
    }

    cout << n - mostFreq << '\n';

    return 0;
}
