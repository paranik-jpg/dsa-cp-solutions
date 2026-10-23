#include <bits/stdc++.h>
using namespace std;

struct SegTree {
    int n;
    vector<int> tree, lazy;

    SegTree(int n) {
      this->n = n;
      tree.assign(4 * n, 0);
      lazy.assign(4 * n, 0);
    }

    void push(int node) {
        if (lazy[node] != 0) {
            int val = lazy[node];

            tree[node * 2] += val;
            tree[node * 2 + 1] += val;

            lazy[node * 2] += val;
            lazy[node * 2 + 1] += val;

            lazy[node] = 0;
        }
    }

    void update(int node, int l, int r, int ql, int qr, int val) {

        if (ql > r || qr < l) {
            return;
        }

        if (ql <= l && r <= qr) {
            tree[node] += val;
            lazy[node] += val;
            return;
        }

        push(node);

        int mid = (l + r) / 2;

        update(node * 2, l, mid, ql, qr, val);
        update(node * 2 + 1, mid + 1, r, ql, qr, val);

        tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
    }

    void update(int l, int r, int val) {
        if (l > r) {
            return;
        }

        update(1, 0, n - 1, l, r, val);
    }

    int query(int node, int l, int r, int ql, int qr) {

        if (ql > r || qr < l) {
            return INT_MIN;
        }

        if (ql <= l && r <= qr) {
            return tree[node];
        }

        push(node);

        int mid = (l + r) / 2;

        return max(query(node * 2, l, mid, ql, qr), query(node * 2 + 1, mid + 1, r, ql, qr));
    }

    int query(int l, int r) {
        return query(1, 0, n - 1, l, r);
    }

    void setValue(int pos, int val) {
        int cur = query(pos, pos);
        update(pos, pos, val - cur);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> p(n);
        vector<int> pos(n + 1);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        SegTree seg(2 * n);

        vector<bool> present(n + 2, false);

        int blocks = 0;

        for (int i = 0; i < n; i++) {
            int x = p[i];

            bool left = (x > 1 && present[x - 1]);
            bool right = (x < n && present[x + 1]);

            if (!left && !right) {
                blocks++;
            }
            else if (left && right) {
                blocks--;
            }

            present[x] = true;

            seg.setValue(i, blocks);
        }

        int answer = 0;

        for (int s = 0; s < n; s++) {

            if (seg.query(s, s + n - 1) <= 2) {
                answer++;
            }

            if (s == n - 1) {
                break;
            }

            int x = p[s];

            seg.update(s + 1, s + n - 1, -1);

            if (x > 1) {
                int nxt = pos[x - 1];

                if (nxt <= s) {
                    nxt += n;
                }

                seg.update(nxt, s + n - 1, +1);
            }

            if (x < n) {
                int nxt = pos[x + 1];

                if (nxt <= s) {
                    nxt += n;
                }

                seg.update(nxt, s + n - 1, +1);
            }

            seg.setValue(s + n, 1);
        }

        cout << answer << '\n';
    }

    return 0;
}
