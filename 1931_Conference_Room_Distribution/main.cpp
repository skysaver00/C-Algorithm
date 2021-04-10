#include <bits/stdc++.h>
using namespace std;

struct time {
    int x;
    int y;
};

bool cmp(const struct time& t1, const struct time& t2) {
    if(t1.x == t2.x) {
        return t1.y < t2.y;
    } else {
        return t1.x < t2.x;
    }
}

bool select[100001];

int main() {
    struct time time[100001];
    struct time time2[100001];

    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d %d", &time[i].x, &time[i].y);

    sort(time, time + n, cmp);

    for(int i = 0; i < n; i++) {
        printf("%d %d\n", time[i].x, time[i].y);
    }

    int v = 0;

    time2[v].x = time[v].x;
    time2[v].y = time[v].y;
    v++;

    for(int i = 1; i < n; i++) {
        if(time2[v - 1].x == time[i].x && time2[v - 1].y == time[i].y) {
            continue;
        } else {
            time2[v].x = time[i].x;
            time2[v].y = time[i].y;
            v++;
        }
    }

    printf("\n");

    for(int i = 0; i < v; i++) {
        printf("%d %d\n", time2[i].x, time2[i].y);
    }

    int k = 0;
    while(k != v) {
        int now;
        for (int i = k; i < v; i++) {
            if(!select[i]) {
                printf("select %d\n", i);
                now = i;
                break;
            }
        }

        for(int i = now; i < v; i++) {
            if(time2[now].y >= time2[i].y && !select[i]) {
                printf("select %d\n", i);
                now = i;
            }
        }

        int hour = time2[now].y;
        for(int i = 0; i < n; i++) {
            if(time2[i].x < hour && time2[i].y > hour && now != i) select[i] = true;
        }

        for(int i = 0; i < v; i++) {
            printf("%d %d %d\n", time2[i].x, time2[i].y, select[i]);
        }

        k++;
    }

    return 0;
}