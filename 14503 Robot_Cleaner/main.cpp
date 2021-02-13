#include <stdio.h>

int cnt = 0;
int room[51][51];
int deadcnt = 0;
int N, M;

void vaccum(int y, int x, int compass) {
    if(deadcnt > 20) return;

    if(room[y][x] == 0) {
        cnt++;
        deadcnt = 0;
        room[y][x] = cnt;
        vaccum(y, x, compass);
    }
    else {
        if(deadcnt == 4) {
            if(compass == 0) {
                if(room[y + 1][x] != 1) {
                    y++;
                    deadcnt = 0;
                    vaccum(y, x, compass);
                }
                else {
                    return;
                }
            }
            else if(compass == 1) {
                if(room[y][x + 1] != 1) {
                    x++;
                    deadcnt = 0;
                    vaccum(y, x, compass);
                }
                else {
                    return;
                }
            }
            else if(compass == 2) {
                if(room[y - 1][x] != 1) {
                    y--;
                    deadcnt = 0;
                    vaccum(y, x, compass);
                }
                else {
                    return;
                }
            }
            else {
                if(room[y][x - 1] != 1) {
                    x--;
                    deadcnt = 0;
                    vaccum(y, x, compass);
                }
                else {
                    return;
                }
            }
        }

        if(compass == 0) {
            if(room[y][x - 1] == 0) {
                compass = 1;
                x--;
                vaccum(y, x, compass);
            }
            else {
                compass = 1;
                deadcnt++;
                vaccum(y, x, compass);
            }
        }
        else if(compass == 1) {
            if(room[y + 1][x] == 0) {
                compass = 2;
                y++;
                vaccum(y, x, compass);
            }
            else {
                compass = 2;
                deadcnt++;
                vaccum(y, x, compass);
            }
        }
        else if(compass == 2) {
            if(room[y][x + 1] == 0) {
                compass = 3;
                x++;
                vaccum(y, x, compass);
            }
            else {
                compass = 3;
                deadcnt++;
                vaccum(y, x, compass);
            }
        }
        else {
            if(room[y - 1][x] == 0) {
                compass = 0;
                y--;
                vaccum(y, x, compass);
            }
            else {
                compass =0;
                deadcnt++;
                vaccum(y, x, compass);
            }
        }
    }
}

int main() {

    scanf("%d %d", &N, &M);

    int r, c, d;
    scanf("%d %d %d", &r, &c, &d);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &room[i][j]);
        }
    }

    vaccum(r, c, d);

    printf("%d\n", cnt);

    return 0;
}