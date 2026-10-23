#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long calc(long long base, long long exp) {
    long long res = 1;

    base %= MOD;

    while(exp > 0) {
        if(exp & 1) {
            res = (res*base)%MOD;
        }

        base = (base*base)%MOD;
        exp >>= 1;
    }

    return res;
}


long long solve(long long n, long long m, long long r, long long c) {
    long long variables = n*m;
    long long equations = 0;

    if(r <= n && c <= m) {
        equations = (n-r+1)*(m-c+1);
    }

    long long free_variables = variables - equations;

    return calc(2, free_variables);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;
        long long ans = solve(n, m, r, c);
        cout << ans << endl;
    }
    return 0;
}