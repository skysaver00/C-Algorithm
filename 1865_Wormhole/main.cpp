#include <iostream>
#include <vector>

using namespace std;

int n, m, w;
vector<pair<int, int>> vec[501];
long long dist[501];
int INF = 2147483647;

bool ck() {
    for(int i = 1; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int l = 0; l < vec[j].size(); l++) {
                int s, e, t;

                s = j;
                e = vec[j][l].first;
                t = vec[j][l].second;
                if (dist[e] > dist[s] + t) {
                    dist[e] = dist[s] + t;
                }
            }

        }
        for(int j = 1; j <= n; j++) {
            for(int l = 0; l < vec[j].size(); l++) {
                int s, e, t;

                s = j;
                e = vec[j][l].first;
                t = vec[j][l].second;
                if (dist[e] > dist[s] + t) {
                    return true;
                }
            }
        }
        return false;
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        cin >> n >> m >> w;
        for (int i = 0; i < m + w; i++) {
            int s, e, t;
            cin >> s >> e >> t;
            if (i < m) {
                vec[s].push_back({e, t});
                vec[e].push_back({s, t});
            } else {
                vec[s].push_back({e, -t});
            }
        }

        for(int i = 1; i <= n; i++) {
            dist[i] = INF;
        }

        dist[1] = 0;
        bool cycle = ck();
        if(cycle) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}