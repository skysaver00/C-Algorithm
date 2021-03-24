#include <stdio.h>

int count[10000];
int main() {
    int A, P;
    scanf("%d %d", &A, &P);

    int cnt = 1;
    while(1) {
        int mir_A = A;

        int sum = 0;
        while(mir_A) {
            int ans = 1;
            for(int i = 0; i < P; i++){
                ans *= mir_A % 10;
            }
            sum += ans;
            mir_A /= 10;
        }
        printf("%d %d\n", sum, cnt);
        A = sum;

        if(count[A] != 0) {
            printf("%d\n", count[A] + 1);
            return 0;
        }
        count[A] = cnt++;
    }
}