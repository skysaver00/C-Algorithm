#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, level = 2, cnt = 0;
int map[21][21];
int ckMap[21][21];
queue<pair<int, int>> que;
vector<pair<int, int>> vec;
int vecArr[401];
pair<int, int> point;

int x[4] = {0, -1, 1, 0};
int y[4] = {-1, 0, 0, 1};

bool bfs() {
    int a = point.first, b = point.second;
    int max = 9999;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if((max > (abs(a - i) + abs(b - j))) && map[i][j] < level && map[i][j] != 0) {
                max = abs(a - i) + abs(b - j);
                vec.clear();
                cout << "push: " << i << "  " << j << ":\n";
                vec.push_back({i, j});
            } else if(max == (abs(a - i) + abs(b - j)) && map[i][j] < level && map[i][j] != 0) {
                cout << "push: " << i << "  " << j << ":\n";
                vec.push_back({i, j});
            } else {
                continue;
            }
            cout << max << "\n";
        }
    }

    printf("%d %d\n", vec[0].first, vec[0].second);
    if(max == 9999) return false;
    else {
        cnt += max;
        cout << "Cnt is: " << cnt << "\n";
        map[point.first][point.second] = 0;
        point.first = vec[0].first, point.second = vec[0].second;
        map[point.first][point.second] = 9;
        vec.clear();

        return true;
    }
}

void solve(int ate) {
    bool possible = false;
    int food = ate;
    if(food == level) {
        level++;
        food = 0;
    }
    printf("___________________food level %d %d\n", food, level);
    cout << "ate " << food << "\n";

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", map[i][j]);
        }printf("\n");
    }printf(":)\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(map[i][j] < level) possible = true;
        }
    }

    if(possible) {
        bool yes = bfs();
        if(yes) {
            solve(food + 1);
        }
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
    cout << cnt << "\n";

    return 0;
}