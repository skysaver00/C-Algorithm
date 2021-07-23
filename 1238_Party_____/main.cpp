#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int INF = 2147483647;

vector<pair<int, int>> vec[1001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
bool check[1001];
int val[1001];
int val2[1001][1001];

void path(int k) {
    val[k] = 0;
    pq.push({0, k});

    while(!pq.empty()) {
        int curr = pq.top().second;
        int dist = pq.top().first;

        pq.pop();

        if(check[curr]) continue;
        if(val[curr] < dist) continue;

        int sz = vec[curr].size();
        for(int i = 0 ; i < sz; i++) {
            int next = vec[curr][i].first;
            int nextDist = dist + vec[curr][i].second;

            if(nextDist < val[next]) {
                val[next] = nextDist;
                pq.push({nextDist, next});
            }
        }
        check[curr] = true;
    }
}

int main() {
    int N, M, X; cin >> N >> M >> X;

    for(int i = 1; i <= N; i++) val[i] = INF;
    for(int i = 0; i < M; i++) {
        int from, to, len; cin >> from >> to >> len;
        vec[from].push_back({len, to});
        vec[to].push_back({len, from});
    }

    for(int i = 1; i <= N; i++) {
        path(i);
        for(int j = 1; j <= N; j++) {
            val2[i][j] = val[j];
        }
        for(int j = 1; j <= N; j++) {
            val[j] = INF;
            check[j] = false;
        }
    }

    int max = 0;
    for(int i = 1; i <= N; i++) if(max < val2[i][X] + val2[X][i]) max = val2[i][X] + val2[X][i];
    cout << max << "\n";
    return 0;
}