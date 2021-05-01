#include <stdio.h>
#include <queue>
using namespace std;

int gameArea[101][101];
long long turn[101][101];

queue<pair<int, int>> loc;

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &gameArea[i][j]);
        }
    }

    loc.push({0, 0});

    while(!loc.empty()) {
        int y = loc.front().first;
        int x = loc.front().second;

        loc.pop();
        int jump = gameArea[y][x];

        turn[y + jump][x] = turn[y][x] + 1;
        turn[y][x + jump] = turn[y][x] + 1;

        loc.push({y + jump, x});
        loc.push({y, x + jump});

        for(int i = 0; i < n ; i++) {
            for(int j = 0; j < n; j++) {
                printf("%d ", turn[i][j]);
            } printf("\n");
        } printf("\n");
    }

    return 0;
}