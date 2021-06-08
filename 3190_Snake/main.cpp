#include <stdio.h>
#include <queue>
using namespace std;

int n;
int mp[105][105];
queue<pair<int, int>> que;

struct order {
    int time;
    char c;
};

struct order oder[10001];
int face = 0;

int startSnake(int i, int j) {
    int t = 0;
    int x = j;
    int y = i;
    int now = 0;
    while(1) {
        if(face == 0) x++;
        else if(face == 1) y--;
        else if(face == 2) x--;
        else if(face == 3) y++;

        if(y <= n && y >= 1 && x <= n && x >= 1) {}
        else break;

        if(mp[y][x] == 2) {
            mp[y][x] = 1;
            que.push({y, x});
        }else if(mp[y][x] == 1) break;
        else if(mp[y][x] == 0) {
            mp[que.front().first][que.front().second] = 0;
            que.pop();
            mp[y][x] = 1;
            que.push({y, x});
        }

        if(oder[now].time == t) {
            if(oder[now].c == 'L') face = ((face + 1) % 4);
            else {
                if(face == 0) face = (face + 3);
                else face = (face - 1);
            }
            now++;
        }

        printf("%d %d %d\n", y, x, t);
        for(int k = 1; k <= n; k++) {
            for(int l = 1; l <= n; l++) {
                printf("%d ", mp[k][l]);
            }printf("\n");
        }printf("\n");
        t++;
    }

    return t;
}

int main() {
    scanf("%d", &n);

    int k;
    scanf("%d", &k);
    for(int i = 0; i < k; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        mp[a][b] = 2; //apple
    }

    int l;
    scanf("%d", &l);
    for(int i = 0; i < l; i++) {
        int x; char cr;
        scanf("%d %c", &x, &cr);
        oder[i].time = x;
        oder[i].c = cr;
    }

    mp[1][1] = 1;
    que.push({1, 1});
    int ans = startSnake(1, 1);
    printf("%d\n", ans);

    return 0;
}