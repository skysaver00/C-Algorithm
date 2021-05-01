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

    turn[0][0] = 1;
    loc.push({0, 0});

    while(!loc.empty()) {
        int y = loc.front().first;
        int x = loc.front().second;

        loc.pop();

        int jump = gameArea[y][x];

        turn[y + jump][x] += turn[y][x];
        turn[y][x + jump] += turn[y][x];
        //printf("right now: %d %d\n", y, x);

        if(y + jump < n && y + jump != y) {
            //printf("%d %d\n", y + jump, x);
            if(y + jump != n - 1 || x != n - 1) loc.push({y + jump, x});
        }
        if(x + jump < n && x + jump != x) {
            //printf("%d %d\n", y, x + jump);
            if(y != n - 1 || x + jump != n - 1) loc.push({y, x + jump});
        }

        /*for(int i = 0; i < n ; i++) {
            for(int j = 0; j < n; j++) {
                printf("%d ", turn[i][j]);
            } printf("\n");
        } printf("\n");*/
    }

    printf("%lld\n", turn[n - 1][n - -1]);

    return 0;
}