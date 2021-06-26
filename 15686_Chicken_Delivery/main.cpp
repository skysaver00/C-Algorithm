#include <iostream>
#include <vector>
using namespace std;

int min(int i, int j) {
    return (i < j) ? i : j;
}

int n, m;
int minimum;
int dis[110];
int visit[20];
int axis[51][51];
vector<pair<int, int>> vec_1;
vector<pair<int, int>> vec_2;

void combination(int idx, int cnt, int max, int size) {
    if(cnt == max) {
        int sz = vec_1.size();
        for(int i = 0; i < size; i++) {
            if(visit[i]) {
                for(int j = 0; j < sz; j++)
                    dis[j] = min(abs(vec_1[j].first - vec_2[i].first) + abs(vec_1[j].second - vec_2[i].second), dis[j]);
            }
        }
        int disCount = 0;
        for(int i = 0; i < sz; i++) disCount += dis[i];
        minimum = min(minimum, disCount);
        for(int i = 0; i < sz; i++) dis[i] = 99999999;
        return;
    }

    for(int i = idx; i < size; i++) {
        if(visit[i]) continue;
        visit[i] = true;
        combination(i, cnt + 1, max, size);
        visit[i] = false;
    }
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> axis[i][j];
            if(axis[i][j] == 2) vec_2.push_back({i, j});
            else if(axis[i][j] == 1) vec_1.push_back({i, j});
        }
    }

    minimum = 999999999;
    int sz = vec_1.size();
    for(int i = 0; i < sz; i++) dis[i] = 99999999;
    int sz2 = vec_2.size();
    combination(0, 0, m, sz2);
    cout << minimum << "\n";
    return 0;
}