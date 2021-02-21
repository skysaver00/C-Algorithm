#include <stdio.h>

int main() {
    for(int T = 0; T < 3; T++) {
        int a;

        int cnt = 0;
        for (int i = 0; i < 4; i++) {
            scanf("%d", &a);
            if (a == 1) cnt++;
        }

        if (cnt == 0 || cnt == 4) printf("E\n");
        else if (cnt == 1) printf("C\n");
        else if (cnt == 2) printf("B\n");
        else printf("A\n");
    }

    return 0;
}