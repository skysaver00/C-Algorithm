#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int fiveNum = 0;
    for(int i = 2; i <= t; i++) {
        int check = i;
        while(check % 5 == 0) {
            fiveNum++;
            check /= 5;
        }
    }

    printf("%d\n", fiveNum);
    return 0;
}