#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> arr[20001];
int val[300005];
int INF = 2147483647;

void dijkstra(int k) {
    val[k] = 0;
    priority_queue<pair<int, int>> pq;
}

int main() {
    int v, e;
    int k;
    scanf("%d %d", &v, &e);
    scanf("%d", &k);

    for(int i = 1; i <= v; i++) val[i] = INF;

    for(int i = 0; i < e; i++) {
        int from, to, len;
        scanf("%d %d %d", &from, &to, &len);

        arr[from].push_back(make_pair(to, len));
    }

    dijkstra(k);

    return 0;
}