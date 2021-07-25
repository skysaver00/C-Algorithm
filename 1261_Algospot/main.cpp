#include <iostream>
#include <queue>
using namespace std;

int n, m;
char charWall[101][101];
int wall[101][101];
int val[101][101];
priority_queue <pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
int INF = 2147483647;
int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

void path(int k, int l) {
    val[k][l] = 0;
    pq.push({0, {0, 0}});

    while(!pq.empty()) {
        int currX = pq.top().second.first;
        int currY = pq.top().second.second;
        int dist = pq.top().first;
        pq.pop();
        for(int i = 0; i < 4; i++) {
            int nextX = currX + x[i];
            int nextY = currY + y[i];
            if(nextX >= n || nextX < 0 || nextY >= m || nextY < 0) continue;
            int nextDist = dist + wall[nextX][nextY];
            if(nextDist < val[nextX][nextY]) {
                val[nextX][nextY] = nextDist;
                pq.push({nextDist, {nextX, nextY}});
            }
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n;

    for(int i = 0; i < n; i++) cin >> charWall[i];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(charWall[i][j] == '0') {
                wall[i][j] = 0;
            } else {
                wall[i][j] = 1;
            }
        }
    }

    /*for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << val[i][j] << " ";
        }cout << "\n";
    }*/


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            val[i][j] = INF;
        }
    }

    path(0, 0);
    /*for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << val[i][j] << " ";
        }cout << "\n";
    }*/
    cout << val[n - 1][m - 1] << "\n";

    return 0;
}