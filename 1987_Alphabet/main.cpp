#include <stdio.h>
char arr[21][21];
int route[21][21];
bool Acheck[27];
int r, c;
int t = 1;
int realma = 1;

int max(int i, int j) {
    return i > j ? i : j;
}

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

void startDFS(int a, int b, int t) {
    for(int i = 0; i < 4; i++) {
        int _x = a + x[i];
        int _y = b + y[i];

        if(_x < r && _y < c && _x >= 0 && _y >= 0) {}
        else continue;

        if(Acheck[arr[_x][_y] - 0x41]) continue;
        Acheck[arr[_x][_y] - 0x41] = true;
        route[_x][_y] = route[a][b] + 1;
        realma = max(realma, route[_x][_y]);

        startDFS(_x, _y, ++t);
        Acheck[arr[_x][_y] - 0x41] = false;
    }
}

int main() {
    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++) {
        scanf("%s", arr[i]);
    }
    Acheck[arr[0][0] - 0x41] = true;
    route[0][0] = 1;
    startDFS(0, 0, t);

    printf("%d\n", realma);

    return 0;
}