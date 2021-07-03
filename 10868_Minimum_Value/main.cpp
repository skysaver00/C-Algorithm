#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int min(int i, int j) {
    return (i < j) ? i : j;
}

int init(vector<int> &arr, vector<int> &tree, int start, int end, int node) {
    if(start == end) return tree[node] = arr[start];
    int mid = (start + end) / 2;

    return tree[node] = min(init(arr, tree, start, mid, node * 2),
                            init(arr, tree, mid + 1, end, node * 2 + 1));
}

int ans(vector<int> &arr, vector<int> &tree, int start, int end, int node, int left, int right) {
    if(start > right || end < left) return 1500000000;
    if(start >= left && end <= right) return tree[node];

    int mid = (start + end) / 2;
    return min(ans(arr, tree, start, mid, node * 2, left, right),
               ans(arr, tree, mid + 1, end, node * 2 + 1, left, right));
}

int main() {
    int n, m; cin >> n >> m;
    int h = (int)ceil(log2(n));
    int size = (1 << (1 + h));

    vector<int> arr(n);
    vector<int> tree(size);

    for(int i = 0; i < n; i++) cin >> arr[i];

    init(arr, tree, 0, n - 1, 1);
    for(int i = 0; i < 4 * n; i++) {
        cout << tree[i] << " ";
    }

    int left, right;
    for(int i = 0; i < m; i++) {
        cin >> left >> right;
        int val = ans(arr, tree, 0, n - 1, 1, left - 1, right - 1);
        cout << val << "\n";
    }

    return 0;
}