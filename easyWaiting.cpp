#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    vector<int> entryTimes(n + 1);
    
    for(int person = 1; person <= n; person++) {
        cin >> entryTimes[person];
    }

    
}

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    cout << solve(n) << endl;
	}
    return 0;
}
