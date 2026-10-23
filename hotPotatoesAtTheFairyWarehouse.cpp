#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
      int n, k;
      cin >> n >> k;

      string s;
      cin >> s;

      int iniRedHaving = 0;
      int iniBlueHaving = 0;
      int redToTransfer = 0;
      int blueToTransfer = 0;

      for(int i = 0; i < 2 * n; i++) {
        if(s[i] == '1') {
            if(i % 2) {
              iniBlueHaving++;
              if(s[(i + 1) % (2 * n)] == '0') {
                blueToTransfer++;
              }
            }
            else {
              iniRedHaving++;
              if(s[i + 1] == '0') {
                redToTransfer++;
              }
            }
        }
      }

      int redScore = redToTransfer + iniBlueHaving - blueToTransfer;
      int blueScore = blueToTransfer + iniRedHaving - redToTransfer;

      cout << redScore << " " << blueScore << '\n';
    }

    return 0;
}
