#include <cstdio>
int paper[130][130];
int blue = 0;
int white = 0;

void solve(int y, int x, int n) {
    int check = paper[y][x];
    for(int i = y; i < y + n; i++) {
        for(int j = x; j < x + n; j++) {
            if(check == 0 && paper[i][j] == 1) check = 2;
            else if(check == 1 && paper[i][j] == 0) check = 2;
        }
        if(check == 2) {
            solve(y, x, n / 2);
            solve(y, x + (n / 2), n / 2);
            solve(y + (n / 2) , x, n / 2);
            solve(y + (n / 2), x + (n / 2), n / 2);

            return;
        }
    }

    if(check == 1) blue++;
    else white++;
}

int main () {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &paper[i][j]);
        }
    }
    solve(0, 0, n);

    printf("%d\n%d\n", white, blue);

    return 0;
}