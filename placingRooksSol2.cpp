#include <bits/stdc++.h>
using namespace std;

int solve(int N, int M) {
    vector<int> rows(M + 1);
    vector<int> cols(M + 1);

    vector<bool> rowUsed(N + 1, false);
    vector<bool> colUsed(N + 1, false);

    for(int i = 1; i <= M; i++) {
        cin >> rows[i] >> cols[i];
    }

    int cnt = 0;
    for(int i = M; i >= 1; i--) {
        if((!rowUsed[rows[i]]) && (!colUsed[cols[i]])) {
            cnt++;
        }
        rowUsed[rows[i]] = true;
        colUsed[cols[i]] = true;
    }

    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
	cin >> N >> M;

    cout << solve(N, M) << '\n';

    return 0;
}