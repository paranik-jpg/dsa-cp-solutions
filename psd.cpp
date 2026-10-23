#include <bits/stdc++.h>
using namespace std;

static bool comp(pair<int,int> p1, pair<int,int> p2) {
    return (p1.first >= p2.first);
}

int main() {
    vector<pair<int, int>> vec = {{6, 4}, {11, 1}, {2, 1}, {1, 3}};
    sort(vec.begin(), vec.end(), comp);

    for(auto it : vec) {
        cout << it.first << " " << it.second << endl;
    }

}