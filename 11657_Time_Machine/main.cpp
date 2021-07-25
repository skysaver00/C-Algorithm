#include <iostream>
#include <vector>
using namespace std;

int n, m;
int INF = 2147483647;
vector<pair<int, int>> vec[501];
long long time[501];

void bellman(int k) {
    time[k] = 0;

    bool cycle = false;
    for(int i = 0; i <= m; i++) {
        int tf = false;
        for(int j = 1; j <= n; j++) {
            int sz = vec[j].size();
            for(int k = 0; k < sz; k++) {
                int next = vec[j][k].first;
                if(time[j] == INF) continue;
                int nextDist = vec[j][k].second + time[j];

                if(nextDist < time[next]) {
                    tf = true;
                    time[next] = nextDist;
                }
            }
        }

        if(!tf) break;
        if(i == m) cycle = true;
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