#include <iostream>
using namespace std;

long long numbers[1000001];
long long tree[4000001];

long long initialize(int start, int end, int node) {
    if(start == end) return tree[node] = numbers[start];
    int mid = (start + end) / 2;
    return tree[node] = (initialize(start, end, node * 2) * initialize(mid + 1, end, node * 2 + 1)) % 1000000007;
}

void update(int start, int end, int node, int index, long long change) {

}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k; cin >> n >> m >> k;
    for(int i = 0; i < n; i++) cin >> numbers[i];

    initialize(0, n - 1, 1);


    return 0;
}