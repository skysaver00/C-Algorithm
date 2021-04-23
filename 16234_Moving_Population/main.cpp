#include <bits/stdc++.h>
using namespace std;

int terr[51][51];
int open[51][51];
int m, l, r;
queue<pair<int, int>> bfs;

int x[4] = {1, 0, -1 ,0};
int y[4] = {0, 1, 0, -1};

int startBFS(int a, int b, int n) {
    if(open[a][b] == 0) {
        open[a][b] = n;
        bfs.push({a, b});
    } else {
        n = open[a][b];
        printf("%d %d %d\n", n, a, b);
        bfs.push({a, b});
    }

    while(!bfs.empty()) {
        int one = bfs.front().first;
        int two = bfs.front().second;
        bfs.pop();
        for(int i = 0; i < 4; i++) {
            if(one + x[i] > m || one + x[i] < 0 || two + y[i] > m || two + y[i] < 0) continue;
            printf("check: %d %d %d %d %d\n", abs(terr[one + x[i]][two + y[i]] - terr[one][two]), one, two, one + x[i], two + y[i]);
            printf("pp: %d %d %d\n", open[one + x[i]][two + y[i]], one + x[i], two + y[i]);
            if(open[one + x[i]][two + y[i]] == 0 && (abs(terr[one + x[i]][two + y[i]] - terr[one][two]) >= l) && (abs(terr[one + x[i]][two + y[i]] - terr[one][two]) <= r)) {
                printf("yes: %d %d\n", one + x[i], two + y[i]);
                bfs.push({one + x[i], two + y[i]});
                open[one + x[i]][two + y[i]] = n;
            }
        }
    }
    return n;
}

int main() {
    scanf("%d %d %d", &m, &l, &r);

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &terr[i][j]);
        }
    }

    int count = 1;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            int check = startBFS(i, j, count);
            count = ++check;

            for(int a = 0; a < m; a++) {
                for(int b = 0; b < m; b++) {
                    printf("%d ", open[a][b]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}