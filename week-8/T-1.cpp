#include<bits/stdc++.h>
using namespace  std;
const int N = 1e5+5;
int tree[N*4];
int j = 1;

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

    tree[node] = tree[leftNode] + tree[rightNode];
}

void update(int node, int l, int r, int indx, int val) {
    if(indx < l || indx > r) {
        return;
    }
    if ( l == r && l == indx) {
        tree[node] += val;
        return;
    }

    int leftNode = node*2;
    int rightNode = leftNode+1;
    int mid = (l+r)/2;

    update (leftNode, l, mid, indx, val);
    update(rightNode, mid+1, r, indx, val);

    tree[node] = tree[leftNode] + tree[rightNode];
}

int query (int node, int l, int r, int x, int y) {
    if(r < x || l > y) {
        return 0;
    }
    if(l >= x && r <= y) {
        return tree[node];
    }

    int leftNode = node*2;
    int rightNode = leftNode+1;
    int mid = (l+r)/2;
    return query(leftNode, l, mid, x, y) + query(rightNode, mid+1, r, x, y);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
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
            int p; cin >> p;
            if(p == 1) {
                int x; cin >> x;
                int ans = a[x];
                a[x] = 0;
                cout << ans << '\n';
                update (1, 0, n-1, x, -ans);
                
            }
            else if (p == 2) {
                int x, val;
                cin >> x >> val;
                a[x] += val;
                update(1, 0, n-1, x, val);
                
            }
            else {
                int x, y; cin >> x >> y;
                int ans = query(1, 0, n-1, x, y);
                cout << ans << '\n';
            }
        }
    }
   
    return 0;
}