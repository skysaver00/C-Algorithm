#include <stdio.h>

int main() {
    int t;

    scanf("%d", &t);

    int i = 0;
    int num = 665;
    int val = 0;
    while(1) {
        int check = num;
        int flag = 0;

        while(check) {
            int cmp = check % 1000;
            if(cmp == 666) {
                flag = 1;
                break;
            }
            else check /= 10;
        }
        if(flag == 1) {
            i++;
            if(i == t) {
                val = num;
                break;
            }
            flag = 0;
        }
        num++;
    }

    printf("%d\n", val);
}