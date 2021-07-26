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
        for(int j = 1; j <= n; j++) {
            int newj = j + k;
            if(j + k > n) newj = (j + k + 1) % n;

            cout << newj << "\n";
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

        for(int l = 0; l < n; l++) {
            for(int i = 1; i <= n; i++) dist[i] = INF;
            dist[l] = 0;

            bellman(l);
        }
    }
}