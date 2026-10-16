class Solution {
    static const int MOD = 1e9 + 7;

    struct Node {
        long long sum = 0;
        long long sq = 0;
        long long lazy = 0;
    };

    vector<Node> tree;
    int n;

    void push(int node, int l, int r) {
        if (tree[node].lazy == 0) return;

        long long v = tree[node].lazy;
        int mid = (l + r) / 2;

        for (int child : {node * 2, node * 2 + 1}) {
            int len = (child == node * 2)
                    ? mid - l + 1 : r - mid;

            tree[child].sq =
                (tree[child].sq + 2 * v * tree[child].sum
                 + v * v % MOD * len) % MOD;

            tree[child].sum =
                (tree[child].sum + v * len) % MOD;

            tree[child].lazy =
                (tree[child].lazy + v) % MOD;
        }

        tree[node].lazy = 0;
    }

    void update(int node, int l, int r, int ql, int qr) {
        if (ql <= l && r <= qr) {
            long long v = 1;
            long long len = r - l + 1;

            tree[node].sq =
                (tree[node].sq + 2 * v * tree[node].sum
                 + len) % MOD;

            tree[node].sum = (tree[node].sum + len) % MOD;
            tree[node].lazy = (tree[node].lazy + 1) % MOD;
            return;
        }

        push(node, l, r);
        int mid = (l + r) / 2;

        if (ql <= mid)
            update(node * 2, l, mid, ql, qr);

        if (qr > mid)
            update(node * 2 + 1, mid + 1, r, ql, qr);

        tree[node].sum =
            (tree[node * 2].sum + tree[node * 2 + 1].sum) % MOD;

        tree[node].sq =
            (tree[node * 2].sq + tree[node * 2 + 1].sq) % MOD;
    }

public:
    int sumCounts(vector<int>& nums) {
        n = nums.size();
        tree.assign(4 * n + 5, Node());

        vector<int> last(100001, -1);
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            update(1, 0, n - 1, last[nums[i]] + 1, i);

            ans = (ans + tree[1].sq) % MOD;
            last[nums[i]] = i;
        }

        return ans;
    }
};