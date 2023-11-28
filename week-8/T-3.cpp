// problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2176&fbclid=IwAR0cV5E-mUAZ-k3-N43OwxyW1-ksSpvbr-Jr83FAmqzX0zKF--azKmhNsZ4

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
const int N = 1e5+5;

struct Node {
        int leftMost, rightMost, fleftMost, frightMost, ans;
        Node(int a, int b, int c, int d, int e) {
            leftMost = a;
            rightMost = b;
            fleftMost = c;
            frightMost = d;
            ans = e;
        }

        Node() {}
};

struct Node tree[N*4];

struct Node merge (struct Node leftNode, struct Node rightNode) {
    if(leftNode.ans == 0) {
        return rightNode;
    }

    if (rightNode.ans == 0) {
        return leftNode;
    }

    struct Node cur;
    cur.leftMost = leftNode.leftMost;
    cur.rightMost = rightNode.rightMost;

    if (leftNode.leftMost == rightNode.rightMost) {
        int temp = leftNode.fleftMost + rightNode.frightMost;
        cur.fleftMost = temp;
        cur.frightMost = temp;
        cur.ans = temp;
    }

    else if (leftNode.leftMost == rightNode.leftMost) {
        cur.fleftMost = leftNode.fleftMost + rightNode.fleftMost;
        cur.frightMost = rightNode.frightMost;
        cur.ans = max(cur.fleftMost, rightNode.ans);
    }
    else if (leftNode.rightMost == rightNode.rightMost) {
        cur.fleftMost = leftNode.fleftMost;
        cur.frightMost = leftNode.frightMost + rightNode.fleftMost;
        cur.ans = max(cur.frightMost, leftNode.ans);
    }
    else if (leftNode.rightMost == rightNode.leftMost) {
        cur.fleftMost = leftNode.fleftMost;
        cur.frightMost = rightNode.frightMost;
        cur.ans = max({leftNode.ans, rightNode.ans, leftNode.frightMost + rightNode.fleftMost});
    }

    else {
        cur.fleftMost = leftNode.fleftMost;
        cur.frightMost = rightNode.frightMost;
        cur.ans = max(leftNode.ans, rightNode.ans);
    }

    return cur;
}

void build (int node, int l, int r, int a[]) {
    if( l == r) {
            tree[node].leftMost = a[l];
            tree[node].rightMost =a[l];
            tree[node].fleftMost = 1;
            tree[node].frightMost = 1;
            tree[node].ans = 1;
            return;
    }

    int mid = l + (r - l) / 2;
    int leftNode = node*2;
    int rightNode = leftNode+1;

    build(leftNode, l, mid, a);
    build (rightNode, mid+1, r, a);

    tree[node] = merge(tree[leftNode], tree[rightNode]);

}

struct Node query (int node, int l, int r, int i, int j) {
    if(l >= i && r <= j) {
        return tree[node];
    }

    if (r < i || l > j) {
        return Node(0, 0, 0, 0, 0);
    }

    int mid = l + (r - l) / 2;
    int leftNode = node * 2;
    int rightNode = leftNode + 1;

    return merge (query (leftNode, l, mid, i, j), query (rightNode, mid+1, r, i, j));
}


signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, q;
    while (1) {
        cin >> n;
        if(n == 0) {
            break;
        }

        cin >> q;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        build (1, 0, n-1, arr);

        while (q--) {
            int l, r; cin >> l >> r;
            l--;
            r--;

            cout << query(1, 0, n-1, l, r).ans << '\n';
        }
    }
    return 0;
}