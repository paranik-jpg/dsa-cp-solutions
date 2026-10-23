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

        int totalSum = 0;
        int maxFreq = 0;
        int mostRepeated = 0;
        map<int, int> freq;

        for(int i = 0; i < n; i++) {
          int x;
          cin >> x;
          totalSum += x;
          freq[x]++;
            if(freq[x] > maxFreq) {
              maxFreq = freq[x];
              mostRepeated = x;
            }
        }

        int others = n - maxFreq;

        int sumOfOthers = totalSum - maxFreq * mostRepeated;

        cout << sumOfOthers + mostRepeated * min(maxFreq, others + 2) << '\n';
    }

    return 0;
}
