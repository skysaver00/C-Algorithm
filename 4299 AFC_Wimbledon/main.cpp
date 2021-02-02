#include <stdio.h>

int main() {
    int sum, sub;
    scanf("%d %d", &sum, &sub);

    if((sum + sub) % 2 != 0 || (sum - sub) % 2 != 0 || sum < sub) {
        printf("-1\n");
        return 0;
    }

    printf("%d %d\n", (sum + sub) / 2, (sum - sub) / 2);

    return 0;
}