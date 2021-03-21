#include <stdio.h>
#include <math.h>

bool inside[101][2];
int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        int n;
        scanf("%d", &n);

        for(int j = 0; j < n; j++) {
            int cx, cy, r;
            scanf("%d %d %d", &cx, &cy, &r);

            int len1 = sqrt((x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy));
            if(len1 < r) inside[j][0] = true;

            int len2 = sqrt((x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy));
            if(len2 < r) inside[j][1] = true;
        }

        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(inside[j][0] == 1 && inside[j][1] == 1) {}
            else {
                if(inside[j][0] == 1 || inside[j][1] == 1) cnt++;
            }
        }

        printf("%d\n", cnt);

        for(int j = 0; j < n; j++) {
            inside[j][0] = inside[j][1] = false;
        }
    }

    return 0;
}