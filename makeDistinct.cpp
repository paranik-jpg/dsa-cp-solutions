#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int maxN = 200005;
        vector<int> freq(maxN, 0);
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mini = min(mini, x);
            maxi = max(maxi, x);
            freq[x]++;
        }


        vector<int> vacant;
        for (int i = mini + 1; i <= maxN; i++) {
            if (freq[i] == 0) {
              vacant.push_back(i);
            }
        }

        vector<int> jumps;
        int pntr = 0;
        for (int num = 0; num <= max; num++) {
            if (freq[num] <= 1) {
                continue;
            }

            while (freq[num] > 1) {
              int next_vac = vacant[pntr];
              jumps.push_back(next_vac - num);
              pntr++;
              freq[next_vac]++;
              freq[num]--;
            }
        }

        sort(jumps.begin(), jumps.end());
        // something here
    }

    return 0;
}
