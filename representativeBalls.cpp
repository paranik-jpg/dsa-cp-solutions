#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m) {

    vector<int> maxSizes(m + 1, -1);

    for(int i = 0; i < n; i++) {
        int C, S;
        cin >> C >> S;
        maxSizes[C] = max(maxSizes[C], S);
    }

    for(int i = 1; i <= m; i++) {
        cout << maxSizes[i] << " ";
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, M;
	cin >> N >> M;

    solve(N, M);
    cout << '\n';

    return 0;
}
