#include <stdio.h>

char board[51][51];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) scanf("%s", board[i]);

    bool flag = false;
    if (board[0][0] == 'W') flag = false;
    else flag = true;

    int blackcheckboard[51][51];
    int whitecheckboard[51][51];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j) % 2 == 0) {
                if (board[i][j] == 'W') whitecheckboard[i][j] = 0;
                else whitecheckboard[i][j] = 1;
            } else {
                if (board[i][j] == 'W') whitecheckboard[i][j] = 1;
                else whitecheckboard[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j) % 2 == 0) {
                if (board[i][j] == 'W') blackcheckboard[i][j] = 1;
                else blackcheckboard[i][j] = 0;
            } else {
                if (board[i][j] == 'W') blackcheckboard[i][j] = 0;
                else blackcheckboard[i][j] = 1;
            }
        }
    }

    int x = n - 8;
    int y = m - 8;

    int min = 999999;
    int com = 0;

    for(int i = 0; i <= x; i++) {
        for(int j = 0; j <= y; j++) {
            for(int k = 0 + i; k < i + 8; k++) {
                for(int l = 0 + j; l < j + 8; l++) {
                    com += blackcheckboard[k][l];
                }
            }
            if(min > com) min = com;
            com = 0;
        }
    }

    for(int i = 0; i <= x; i++) {
        for(int j = 0; j <= y; j++) {
            for(int k = 0 + i; k < i + 8; k++) {
                for(int l = 0 + j; l < j + 8; l++) {
                    com += whitecheckboard[k][l];
                }
            }
            if(min > com) min = com;
            com = 0;
        }
    }

    printf("%d\n", min);

    return 0;
}