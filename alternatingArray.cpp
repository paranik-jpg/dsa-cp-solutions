#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        vector<int> A(N);

        int rightFirstEven = 0;
        int rightFirstOdd = 0;

        for(int i = 0; i < N; i++) {
            cin >> A[i];

            if(i % 2) {
                if(A[i] % 2) {
                    rightFirstEven++;
                }
                else {
                  rightFirstOdd++;
                }
            }
            else {
                if(A[i] % 2) {
                  rightFirstOdd++;
                }
                else {
                    rightFirstEven++;
                }
            }
        }

        cout << min(N - rightFirstEven, N - rightFirstOdd) << '\n';
    }


    return 0;
}
