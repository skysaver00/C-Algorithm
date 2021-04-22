#include <bits/stdc++.h>
using namespace std;

int terr[51][51];
int open[51][51];
int n, l, r;
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
            if(one + x[i] > n || one + x[i] < 0 || two + y[i] > n || two + y[i] < 0) continue;
            printf("%d %d %d %d\n", abs(terr[one + x[i]][two + y[i]] - terr[one][two]), one, two, i);
            if(open[one + x[i]][two + y[i]] == 0 && (abs(terr[one + x[i]][two + y[i]] - terr[one][two]) >= l) && (abs(terr[one + x[i]][two + y[i]] - terr[one][two]) <= r)) {
                bfs.push({one + x[i], two + y[i]});
                open[one + x[i]][two + y[i]] = n;
            }
        }
    }

    return n;
}

int main() {
    scanf("%d %d %d", &n, &l, &r);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &terr[i][j]);
        }
    }

    int count = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int check = startBFS(i, j, count);
            count = ++check;

            for(int a = 0; a < n; a++) {
                for(int b = 0; b < n; b++) {
                    printf("%d ", open[a][b]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}