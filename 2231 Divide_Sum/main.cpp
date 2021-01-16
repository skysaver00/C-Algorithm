#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int check = N;

    int digit = 0;
    while(check) {
        check /= 10;

        digit++;
    }

    int flag = 0;
    int realvalue = 0;

    for(int i = N - digit * 9; i < N; i++) {
        int dummy = i;
        int dummy_2 = i;

        while(dummy_2) {
            int remain = dummy_2 % 10;
            dummy_2 /= 10;

            dummy += remain;
        }

        if(dummy == N) {
            flag = 1;
            realvalue = i;

            break;
        }
    }

    if(flag == 0) printf("0\n");
    else printf("%d\n", realvalue);
}