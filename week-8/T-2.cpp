#include<bits/stdc++.h>
using namespace  std;
const int N = 1e5+5;
int tree[N*4];
const int MAX = 1e9+7;

void build (int node, int l, int r, int a[]) {
    if(l == r) {
        tree[node] = a[r];
        return;
    }

    int leftNode = node*2;
    int rightNode = leftNode+1;
    int mid = (l+r)/2;

    build (leftNode, l, mid, a);
    build(rightNode, mid+1, r, a);

    tree[node] = min(tree[leftNode], tree[rightNode]);
}

int query (int node, int l, int r, int x, int y) {
    if(r < x || l > y) {
        return MAX;
    }
    if(l >= x && r <= y) {
        return tree[node];
    }

    int leftNode = node*2;
    int rightNode = leftNode+1;
    int mid = (l+r)/2;
    return min (query(leftNode, l, mid, x, y), query(rightNode, mid+1, r, x, y));
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int j = 1;
    
    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        build (1, 0, n-1, a);
        cout << "Case " << j << ":\n";
        j++;

        while (q--) {
            int x, y; cin >> x >> y;
            x--;
            y--;
            cout << query(1, 0, n-1, x, y) << '\n';
        }
    }
   
    return 0;
}