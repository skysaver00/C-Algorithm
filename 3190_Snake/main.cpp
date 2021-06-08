#include <stdio.h>
#include <queue>
using namespace std;

int mp[105][105];
queue<pair<int, int>> que;

struct order {
    int time;
    char c;
};

int startSnake(int i, int j) {
    int t = 0;
    while(1) {

        break;
    }

    return t;
}

int main() {
    int n;
    scanf("%d", &n);

    int k;
    scanf("%d", &k);
    for(int i = 0; i < k; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        mp[a][b] = 2; //apple
    }

    int l;
    struct order oder[10001];
    scanf("%d", &l);
    for(int i = 0; i < l; i++) {
        int x; char cr;
        scanf("%d %c", &x, &cr);
        oder[i].time = x;
        oder[i].c = cr;
    }

    startSnake(1, 1);

    return 0;
}