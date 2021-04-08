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

int main() {
    struct time time[100001];

    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d %d", &time[i].x, &time[i].y);

    sort(time, time + n, cmp);

    for(int i = 0; i < n; i++) {
        printf("%d %d\n", time[i].x, time[i].y);
    }

    return 0;
}