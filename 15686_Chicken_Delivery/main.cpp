#include <iostream>
#include <vector>
using namespace std;

int n, m;
int min;
int dis[20];
int visit[20];
int axis[51][51];
vector<pair<int, int>> vec;

void combination(int idx, int cnt, int max, int size) {
    if(cnt == max) {
        for(int i = 0; i < size; i++) {
            if(visit[i] == true) {
                printf("%d %d: ", vec[i].first, vec[i].second);
            }printf("\n");
        }
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
            if(axis[i][j] == 2) vec.push_back({i, j});
        }
    }

    int sz = vec.size();
    combination(0, 0, m, sz);

    return 0;
}