#include <iostream>
using namespace std;
int arr[100001];
int tree[400001];

int min(int i, int j) {
    return (i < j) ? i : j;
}

int init(int start, int end, int node) {
    if(start == end) return tree[node] = arr[start];
    int mid = (start + end) / 2;

    return tree[node] = min(init(start, mid, node * 2), init(mid + 1, end, node * 2 + 1));
}

int ans(int start, int end, int node, int left, int right) {
    
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> arr[i];

    init(0, n - 1, 1);
    for(int i = 0; i < 4 * n; i++) {
        cout << tree[i] << " ";
    }

    int left, right;
    for(int i = 0; i < m; i++) {
        cin >> left >> right;
        int val = ans(0, n - 1, 1, left - 1, right - 1);
        cout << val << "\n";
    }

    return 0;
}