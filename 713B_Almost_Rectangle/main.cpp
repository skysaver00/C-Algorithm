#include <bits/stdc++.h>
using namespace std;
char axis[401][401];

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        int xy[2][2];
        int star = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                scanf(" %c", &axis[i][j]);
                if(axis[i][j] == '*') {
                    xy[star][0] = i;
                    xy[star][1] = j;
                    star++;
                }
            }
        }

        if(xy[0][0] == xy[1][0]) {
            if(xy[0][0] + 1 < n && xy[1][0] + 1 < n) {
                axis[xy[0][0] + 1][xy[0][1]] = '*';
                axis[xy[1][0] + 1][xy[1][1]] = '*';
            } else {
                axis[xy[0][0] - 1][xy[0][1]] = '*';
                axis[xy[1][0] - 1][xy[1][1]] = '*';
            }
        }else if(xy[0][1] == xy[1][1]) {
            if(xy[0][1] + 1 < n && xy[1][1] + 1 < n) {
                axis[xy[0][0]][xy[0][1] + 1] = '*';
                axis[xy[1][0]][xy[1][1] + 1] = '*';
            } else {
                axis[xy[0][0]][xy[0][1] - 1] = '*';
                axis[xy[1][0]][xy[1][1] - 1] = '*';
            }
        }else {
            axis[xy[0][0]][xy[1][1]] = '*';
            axis[xy[1][0]][xy[0][1]] = '*';
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                printf("%c", axis[i][j]);
            }printf("\n");
        }
    }
}