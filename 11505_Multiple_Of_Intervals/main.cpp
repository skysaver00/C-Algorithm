#include <iostream>
using namespace std;

long long numbers[1000001];
long long tree[4000001];

long long initialize(int start, int end, int node) {
    if(start == end) return tree[node] = numbers[start];
    int mid = (start + end) / 2;
    return tree[node] = ((initialize(start, end, node * 2) % 1000000007) * (initialize(mid + 1, end, node * 2 + 1) % 1000000007));
}

long long multiple(int start, int end, int node, int left, int right) {
    if(left > end || right < start) return 0;
    if(left <= start && end <= right) return tree[node];
    int mid = (start + end) / 2;
    return (multiple(start, mid, node * 2, left, right) * multiple(mid + 1, end, node * 2 + 1, left, right)) % 1000000007;
}

void update(int start, int end, int node, int index, double change) {
    if(index < start || index > end) return;
    tree[node] *= change;
    if(start == end) return;
    int mid = (start + end) / 2;
    update(start, mid, node * 2, index, change);
    update(mid + 1, end, node * 2 + 1, index, change);
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k; cin >> n >> m >> k;
    for(int i = 0; i < n; i++) cin >> numbers[i];
    initialize(0, n - 1, 1);
    for(int i = 0; i < 4 * n; i++) cout << tree[i];

    for(int i = 0; i < m + k; i++) {
        int a, b; long long c; cin >> a >> b >> c;
        if(a == 1) {
            double val = (double) c / (double) numbers[b - 1];
            numbers[b - 1] = c;
            update(0, n - 1, 1, b - 1, val);
        } else {
            long long val = multiple(0, n - 1, 1, b - 1, c - 1);
            cout << val << "\n";
        }
    }


    return 0;
}