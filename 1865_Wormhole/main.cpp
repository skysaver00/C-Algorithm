#include <iostream>
#include <vector>
using namespace std;

int n, m, w;
vector<pair<int, int>> vec[501];
long long dist[501];
long long dist2[501];
int INF = 2147483647;

void bellman(int k) {
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n; j++) {
            int newj = j + k;
            if(j + k > n) newj = (j + k) % n;

            int sz = vec[newj].size();
            for(int t = 0; t < sz; t++) {
                int next = vec[newj][t].first;
                if(dist[newj] == INF) break;
                long long nextDist = vec[newj][t].second + dist[newj];

                if(nextDist < dist[next]) dist[next] = nextDist;
            }
        }
    }
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
        cin >> n >> m >> w;
        for(int i = 0; i < m + w; i++) {
            int s, e, t; cin >> s >> e >> t;
            if(i < m) {
                vec[s].push_back({e, t});
            } else {
                vec[s].push_back({e, -t});
            }
        }

        bool ansflag = false;
        for(int l = 1; l <= n; l++) {
            for (int i = 1; i <= n; i++) dist[i] = INF;
            dist[l] = 0;

            bellman(l);

            for (int i = 1; i <= n; i++) dist2[i] = dist[i];
            for (int i = 1; i <= n; i++) cout << dist2[i] << " ";
            cout << "\n";

            bellman(l);

            for (int i = 1; i <= n; i++) cout << dist[i] << " ";
            cout << "\n";

            bool flag = false;
            for (int i = 1; i <= n; i++) {
                if (dist[i] != dist2[i]) {
                    flag = true;
                    ansflag = true;
                    break;
                }
            }

            if (flag) break;
        }
        if(ansflag) cout << "YES\n";
        else cout << "NO\n";

        for(int i = 1; i <= n; i++) vec[i].clear();
    }

    return 0;
}