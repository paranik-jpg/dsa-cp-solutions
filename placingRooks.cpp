#include <bits/stdc++.h>
using namespace std;

int solve(int N, int M) {
    vector<int> row(N + 1, 0);
    vector<int> col(N + 1, 0);

    int cnt = 0;

    while(M--) {
        int R, C;
        cin >> R >> C;

        if(row[R]) {
            col[row[R]] = 0;
            row[R] = 0;
            cnt--;
        }

        if(col[C]) {
            row[col[C]] = 0;
            col[C] = 0;
            cnt--;
        }

        row[R] = C;
        col[C] = R;
        cnt++;
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
