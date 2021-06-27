#include <iostream>
#include <queue>
using namespace std;

int n, level = 2, cnt = 0;
int map[21][21];
int ckMap[21][21];
queue<pair<int, int>> que;
pair<int, int> point;

int x[4] = {0, -1, 1, 0};
int y[4] = {1, 0, 0, -1};

void solve(int ate) {
    bool possible = false;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(map[i][j] < level) possible = true;
        }
    }

    if(possible) {
        
    } else return;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> map[i][j];
            if(map[i][j] == 9) {
                point.first = i;
                point.second = j;
            }
        }
    }

    solve(0);

    return 0;
}