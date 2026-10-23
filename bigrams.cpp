#include <bits/stdc++.h>
using namespace std;

void solve(int k) {
    vector<int> no_of_cards(k);

    for(int i = 0; i < k; i++) {
        cin >> no_of_cards[i];
    }

    bool with_atleast_3 = false;
    int with_atleast_2 = 0;
    for(int i = 0; i < k; i++) {
        if(no_of_cards[i] >= 2) {
            with_atleast_2++;
        }
        if(no_of_cards[i] >= 3) {
            with_atleast_3 = true;
        }
    }

    if(with_atleast_2 > 1 || with_atleast_3) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
}

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int k;
        cin >> k;
        solve(k);
    }

    return 0;
}