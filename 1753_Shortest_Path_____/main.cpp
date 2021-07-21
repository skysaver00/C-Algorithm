#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int, int>> vec[20001];
int val[20001];
int INF = 2147483647;

void path(int k) {
    val[k] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, k});

    while(!pq.empty()) {
        int curr = pq.top().second; //현재 위치
        int dist = pq.top().first; //거리. 초기값은 0
        pq.pop();

        if(val[curr] < dist) continue;

        int sz = vec[curr].size();
        //cout << sz << "\n";
        for(int i = 0; i < sz; i++) {
            int next = vec[curr][i].first;
            int nextDist = dist + vec[curr][i].second;
            //cout << dist << " " << vec[curr][i].second << "\n";

            //cout << i << " " << next << " " << nextDist << " " << val[next] << " " << "\n";

            if(nextDist < val[next]) {
                val[next] = nextDist;
                pq.push({nextDist, next});
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

    for(int i = 1; i <= v; i++)
        val[i] = INF;

    for(int i = 0; i < e; i++) {
        int from, to, len; cin >> from >> to >> len;
        vec[from].push_back({to, len});
    }

    path(start);

    for(int i = 1; i <= v; i++) {
        if(val[i] == INF) cout << "INF\n";
        else cout << val[i] << "\n";
    }
    return 0;
}
