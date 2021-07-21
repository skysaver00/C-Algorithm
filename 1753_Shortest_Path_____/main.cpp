#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int, int>> vec[20001];
int val[300005];
int INF = 2147483647;

void path(int k) {
    val[k] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({0, k});

    while(!pq.empty()) {
        int curr = pq.top().second; //현재 위치
        int dist = -pq.top().first; //거리. 초기값은 0

        pq.pop();
        if(val[curr] < dist) continue;
        int sz = vec[curr].size();
        for(int i = 0; i < sz; i++) {
            int next = vec[curr][i].first;
            int nextDist = dist + vec[curr][i].second;

            cout << next << nextDist << val[next] << "\n";

            if(nextDist < val[next]) {
                val[next] = nextDist;
                pq.push({-nextDist, next});
            }
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int v, e; cin >> v >> e;
    int start; cin >> start;

    for(int i = 0; i < e; i++) {
        int from, to, len; cin >> from >> to >> len;
        vec[from].push_back({to, len});
    }

    path(start);
    return 0;
}
