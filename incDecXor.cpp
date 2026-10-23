#include <bits/stdc++.h>
using namespace std;

const int MAXN = 500005;

int A[MAXN];
int prevNode[MAXN];
int nextNode[MAXN];
int head = -1;
int tail = -1;

void removeNode(int x) {
    if(prevNode[x] != -1) {
        nextNode[prevNode[x]] = nextNode[x];
    }
    else {
      head = nextNode[x];
    }

    if(nextNode[x] != -1) {
        prevNode[nextNode[x]] = prevNode[x];
    }
    else {
      tail = prevNode[x];
    }

    prevNode[x] = -1;
    nextNode[x] = -1;
}

void addBeforeTail(int x) {
    if(head == -1) {
      head = x;
      tail = x;
      prevNode[x] = -1;
      nextNode[x] = -1;
    }
    else {
      nextNode[tail] = x;
      prevNode[x] = tail;
      tail = x;
      nextNode[x] = -1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    for(int i = 1; i <= n; i++) {
      A[i] = 0;
      prevNode[i] = -1;
      nextNode[i] = -1;
    }

    int globalXor = 0;
    for(int i = 0; i < q; i++) {
      int type;
      cin >> type;

      if(type == 1) {
        int x;
        cin >> x;

        if(A[x] == 0) {
          addBeforeTail(x);
        }

        globalXor ^= A[x];
        A[x]++;
        globalXor ^= A[x];
      }
      else {
        int curr = head;

        while(curr != -1) {
          int nxt = nextNode[curr];

            globalXor ^= A[curr];
            A[curr]--;
            globalXor ^= A[curr];

            if(A[curr] == 0) {
                removeNode(curr);
            }

            curr = nxt;
        }
      }

      cout << globalXor << '\n';
    }

    return 0;
}
