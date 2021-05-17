#include <cstdio>
int paper[130][130];

void solve(int y, int x, int n) {
    int check = paper[y][x];
    for(int i = y; i < y + n; i++) {
        for(int j = x; j < x + n; j++) {
            if(check == 0 && paper[i][j] == 1) check = 2;
            else if(check == 1 && paper[i][j] == 0) check = 2;
        }
    }
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

    return 0;
}