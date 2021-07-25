#include <iostream>
#include <vector>
using namespace std;

int n, m;
long long INF = 2147483647;
vector<pair<int, int>> vec[501];
long long time[501];

void bellman(int p) {
    time[p] = 0;

    bool cycle = false;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            int sz = vec[j].size();
            for(int k = 0; k < sz; k++) {
                int next = vec[j][k].first;
                if(time[j] == INF) continue;
                int nextDist = vec[j][k].second + time[j];

                if((time[j] != INF) && (nextDist < time[next])) {
                    time[next] = nextDist;
                    if(i == n) cycle = true;
                }
            }
        }
    }

    if(cycle) {
        cout << -1 << "\n";
        return;
    } else {
        for(int i = 2; i <= n; i++) {
            if(time[i] == INF) {
                cout << -1 << "\n";
                continue;
            }
            cout << time[i] << "\n";
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        time[i] = INF;

    for(int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        vec[a].push_back({b, c});
    }

    bellman(1);

    return 0;
}