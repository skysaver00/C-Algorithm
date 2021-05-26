#include <stdio.h>
int a, b, c;

void desc(int num, int now, int dest) {
    int fact = num;

    int flag = 0;
    int calc = -1;
    while(fact != 0) {
        int vs = fact % 10;
        //printf("c: %d %d %d\n", fact, vs, calc);
        if(calc < vs) {
            calc = vs;
            fact /= 10;
        } else {
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        if(now == dest) {
            printf("%d\n", num);
            return;
        }
        a = now + 1;
        b = num + 1;
        //printf("x: %d %d %d\n", num, now, dest);
    } else {
        a = now;
        b = num + 1;
    }
    return;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i <= 42; i++) {
        desc(b, a, n);
        printf("%d %d %d\n", a, b, n);
    }
}