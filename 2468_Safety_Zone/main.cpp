#include <stdio.h>
#include <queue>

using namespace std;
int land[101][101];
int sink[101][101];
int check[101][101];

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

int main() {
    int N;
    scanf("%d", &N);

    int max = -99999999;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &land[i][j]);
            if(max < land[i][j]) max = land[i][j];
        }
    }

    for(int i = 1; i <= max; i++) {
        int cnt = 1;
        for(int j = 0; j < N; j++) {
            for(int k = 0; k < N; k++) {
                if(land[j][k] <= i) sink[j][k] = 0;
                else sink[j][k] = 1;
            }
        }

        for(int j = 0; j < N; j++) {
            for(int k = 0; k < N; k++) {
                printf("%d\t", sink[j][k]);
            }
            printf("\n");
        }
        printf("\n");

        queue<pair<int, int>> bfs;
        for(int j = 0; j < N; j++) {
            for(int k = 0; k < N; k++) {
                bool flag = false;
                if(check[i][j] != 0) continue;

                bfs.push(pair(j, k));
                check[j][k] = cnt;
                while(!bfs.empty()) {
                    int _y = bfs.front().second;
                    int _x = bfs.front().first;
                    flag = true;
                    bfs.pop();

                    for (int l = 0; l < 4; l++) {
                        int jj = _y + y[l];
                        int kk = _x + x[l];

                        if(jj >= N || kk >= N || jj < 0 || kk < 0) continue;
                        if (sink[jj][kk] == 0) {
                            check[jj][kk] = -1;
                            printf("sink at %d %d %d %d!\n", _x, _y, kk, jj);
                            continue;
                        } else if(check[jj][kk] != 0){
                            continue;
                        } else {
                            bfs.push(pair(kk, jj));
                            check[jj][kk] = cnt;
                        }
                    }
                }

                if(flag) cnt++;
            }
        }

        for(int j = 0; j < N; j++) {
            for(int k = 0; k < N; k++) {
                printf("%d\t", check[j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}