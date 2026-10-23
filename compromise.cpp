#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;

    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        maxi = max(maxi, num);
    }

    if(maxi < 0) {
        cout << "Yes" << '\n';
    } 
    else {
        cout << "No" << '\n';
    }

    return 0;
}
