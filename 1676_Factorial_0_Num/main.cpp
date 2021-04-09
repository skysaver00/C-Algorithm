#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int twoNum = 0;
    int fiveNum = 0;
    for(int i = 2; i <= t; i++) {
        int check = i;
        while(check % 2 == 0) {
            twoNum++;
            check /= 2;
        }
        while(check % 5 == 0) {
            fiveNum++;
            check /= 5;
        }
    }

    printf("%d\n", fiveNum);

    return 0;
}