#include <stdio.h>
int arr[100001];
int minTree[400001];
int maxTree[400001];

int min(int i, int j) {
    return i < j ? i : j;
}

int max(int i, int j) {
    return i > j ? i : j;
}

int init(int start, int end, int node, int flag) {
    if(flag == 1) {
        if(start == end) return minTree[node] = arr[start];
        int mid = (start + end) / 2;
        return minTree[node] = min(init(start, mid, node * 2, 1), init(mid + 1, end, node * 2 + 1, 1));
    } else {
        if(start == end) return maxTree[node] = arr[start];
        int mid = (start + end) / 2;
        return maxTree[node] = max(init(start, mid, node * 2, 2), init(mid + 1, end, node * 2 + 1, 2));
    }
}

int minAns(int start, int end, int node, int left, int right) {
    if(end < left || right < start) return 1000000001;
    if(left <= start && end <= right) return minTree[node];

    int mid = (start + end) / 2;
    return min(minAns(start, mid, node * 2, left, right), minAns(mid + 1, end, node * 2 + 1, left, right));
}

int maxAns(int start, int end, int node, int left, int right) {
    if(end < left || right < start) return 0;
    if(left <= start && end <= right) return maxTree[node];

    int mid = (start + end) / 2;
    return max(maxAns(start, mid, node * 2, left, right), maxAns(mid + 1, end, node * 2 + 1, left, right));
}


int main() {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    init(0, n - 1, 1, 1);
    init(0, n - 1, 1, 2);

    int left, right;
    for(int i = 0; i < m; i++) {
        scanf("%d %d", &left, &right);
        int val = minAns(0, n - 1, 1, left - 1, right - 1);
        int val2 = maxAns(0, n - 1, 1, left - 1, right - 1);
        printf("%d %d\n", val, val2);
    }
    return 0;
}