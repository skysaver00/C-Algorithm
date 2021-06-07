#include <stdio.h>
char arr[21][21];
bool check[21][21];
int route[21][21];
bool Acheck[27];
int r, c;

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

void startDFS(int a, int b) {
    if(check[a][b] != 0) {
        check[a][b] = false;
        return;
    }
    if(Acheck[arr[a][b] - 0x41]) {
        Acheck[arr[a][b] - 0x41] = false;
        return;
    }

    Acheck[arr[a][b] - 0x41] = true;
    check[a][b] = true;
    for(int i = 0; i < 4; i++) {
        int _x = a + x[i];
        int _y = b + y[i];

        if(_x < r && _y < c && _x >= 0 && _y >= 0) {}
        else continue;

        if(check[_x][_y] != 0) continue;
        route[_x][_y] = route[a][b] + 1;

        for(int j = 0; j < r; j++) {
            for(int k = 0; k < c; k++) {
                printf("%d ", route[j][k]);
            }printf("\n");
        }printf("\n");

        for(int j = 0; j < r; j++) {
            for(int k = 0; k < c; k++) {
                printf("%d ", check[j][k]);
            }printf("\n");
        }printf("\n");
        printf("---------------------------------");
        startDFS(_x, _y);
    }
}

int main() {
    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++) {
        scanf("%s", arr[i]);
    }
    route[0][0] = 1;
    startDFS(0, 0);

    return 0;
}