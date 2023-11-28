// problem Link: https://codeforces.com/problemset/problem/380/C?fbclid=IwAR207bPhJoyPy9KWDEgHd87oeTvpjC2f3gAWI2C5bJW9EuRAZzJQ0QP5AYk

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

const int N = 1e6+5;


Node tree [N*4];

Node merge(Node a, Node b) {
    int ans = min (a.open, b.close);
    a.open -= ans;
    b.close -= ans;

    Node n (a.ans + b.ans + ans, a.open + b.open, a.close + b.close);

    return n;
}

void build (int node, int l, int r, string &s) {
    if( l == r) {
        if(s[l] == '(') {
            tree[node].open = 1;
            tree[node].close = 0;
            tree[node].ans = 0;
        }
        else {
            tree[node].close = 1;
            tree[node].open = 0;
            tree[node].ans = 0;
        }
        return;
    }

    int mid = (l + r) / 2;
    int leftNode = node*2;
    int rightNode = leftNode+1;

    build(leftNode, l, mid, s);
    build (rightNode, mid+1, r, s);

    tree[node] = merge(tree[leftNode], tree[rightNode]);

}

Node query (int node, int l, int r, int a, int b) {
    if(l >= a && r <= b) {
        return tree[node];
    }

    if (r < a || l > b) {
        return Node(0, 0, 0);
    }

    int mid = (l + r) / 2;
    int leftNode = node * 2;
    int rightNode = leftNode + 1;

    return merge (query (leftNode, l, mid, a, b), query (rightNode, mid+1, r, a, b));
}


signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    int q; cin >> q;
    build (1, 0, s.size()-1, s);

    while(q--) {
        int l, r; cin >> l >> r;
        l--;
        r--;

        Node p = query(1, 0, s.size()-1, l, r);

        cout << p.ans * 2 << '\n';

    }
    return 0;
}