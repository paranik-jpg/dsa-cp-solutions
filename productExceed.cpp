#include <bits/stdc++.h>
using namespace std;

int solve(int x, int y, int p, vector<vector<int>>& dp) {
    if(x * y >= p) {
      return 0;
    }

    if(dp[x][y] != -1) {
      return dp[x][y];
    }

    int xBda = 1 + solve(x + 1, y, p, dp);
    int yBda = 1 + solve(x, y + 1, p, dp);

    return dp[x][y] = min(xBda, yBda);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {
      int X, Y, P;
      cin >> X >> Y >> P;
      vector<vector<int>> dp(P, vector<int>(P, -1));
      cout << solve(X, Y, P, dp) << '\n';
    }

    return 0;
}
