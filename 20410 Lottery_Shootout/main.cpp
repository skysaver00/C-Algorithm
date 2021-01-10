#include <stdio.h>

int main() {
    int m, seed, x1, x2;
    scanf("%d %d %d %d", &m, &seed, &x1, &x2);
    bool flag = false;

    int a, c;
    int res1, res2;
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= m; j++) {
            a = (i * seed + j) % m;
            if(a == x1) {
                c = (i * a + j) % m;
                if(c == x2) {
                    res1 = i;
                    res2 = j;
                    flag = true;
                    break;
                }
            }
        }

        if(flag == true) break;
    }

    printf("%d %d\n", res1, res2);
}