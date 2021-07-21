#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int INF = 2147483647;

vector<pair<int, int>> vec[1001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
int val[1001];

void path(int k) {
    val[k] = 0;
    pq.push({0, k});

    while(!pq.empty()) {
        int curr = pq.top().second;
        int dist = pq.top().first;
        pq.pop();

        int sz = vec[curr].size();
        for(int i = 0; i < sz; i++) {
            int next = vec[curr][i].first;
            int nextDist = dist + vec[curr][i].second;

            if(nextDist < val[next]) {
                val[next] = nextDist;
                pq.push({nextDist, next});
            }
        }
    }
}

int main() {
    int n; cin >> n;
    int m; cin >> m;

    for(int i = 1; i <= n; i++) val[i] = INF;

    for(int i = 0; i < m; i++) {
        int from, to, len; cin >> from >> to >> len;
        vec[from].push_back({to, len});
    }

    int from, to; cin >> from >> to;
    path(from);

    cout << val[to] << "\n";
    return 0;
}