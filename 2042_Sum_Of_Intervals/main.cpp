#include <stdio.h>
long long num[1000001];
long long tree[4000001];

long long init(int start, int end, int node) {
    if(start == end) return tree[node] = num[start];
    int mid = (start + end) / 2;
    return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

long long sum(int start, int end, int node, int left, int right) {
    if(left > end || right < start) return 0;
    if(left <= start && end <= right) return tree[node];
    int mid = (start + end) / 2;
    return sum(start, mid, node * 2, left, right) + sum(mid + 1, end, node * 2 + 1, left, right);
}

void update(int start, int end, int node, int index, long long change) {
    if(index < start || index > end) return;
    tree[node] += change;
    if(start == end) return;
    int mid = (start + end) / 2;
    update(start, mid, node * 2, index, change);
    update(mid + 1, end, node * 2 + 1, index, change);
}

int main() {
    int n, m, k; scanf("%d %d %d", &n, &m, &k);
    for(int i = 0; i < n; i++) scanf("%lld", &num[i]);

    init(0, n - 1, 1);

    int a, b;
    long long c;
    for(int i = 0; i < m + k; i++) {
        scanf("%d %d %lld", &a, &b, &c);
        if(a == 1) {
            long long val = c - num[b - 1];
            num[b - 1] = c;
            update(0, n - 1, 1, b - 1, val);
        } else if(a == 2) {
            long long val = sum(0, n - 1, 1, b - 1, c - 1);
            printf("%lld\n", val);
        }
    }
    return 0;
}