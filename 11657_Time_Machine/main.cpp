#include <iostream>
#include <vector>
using namespace std;

int n, m;
int INF = 2147483647;
vector<pair<int, int>> vec[501];
int time[501];

void bellman(int k) {
    time[k] = 0;

    int tf = true;
    for(int i = 0; i < m; i++) {
        for(int j = 1; j <= n; j++) cout << time[j] << " ";
        cout << "\n";

        for(int j = 1; j <= n; j++) {
            int sz = vec[j].size();
            for(int k = 0; k < sz; i++) {
                int next = vec[j][k].first;
                int nextDist = vec[j][k].second + time[j];

                if(nextDist < time[next]) {
                    tf = false;
                    time[next] = nextDist;
                }
            }
        }

        if(!tf) break;
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