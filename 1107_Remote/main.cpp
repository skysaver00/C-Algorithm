#include <stdio.h>
int dead[11];
bool chaCh[500001];
int num = 0;
int cha;
int minLimit, maxLimit;

void permutation(int cnt, int max, int size) {
    if(max <= 0) return;
    if(cnt == max) {
        if(chaCh[num]) return;
        printf("cnt: %d, max: %d", cnt, max);
        printf(" %d\n", num);
        chaCh[num] = true;
        return;
    }

    for(int i = 0; i < size; i++) {
        num *= 10;
        if(dead[i] == 0) num += i;
        permutation(cnt + 1, max, size);
        num /= 10;
    }
}

int solve(int cha) {
    int mir = cha;
    int check = 0;
    if(mir == 0) check++;
    while(mir != 0) {
        mir /= 10;
        check++;
    }
    printf("%d\n", check);
    permutation(0, check - 1, 10);
    permutation(0, check, 10);
    permutation(0, check + 1, 10);


    return 0;
}

int main() {
    scanf("%d", &cha);
    int m; scanf("%d", &m);

    for(int i = 0; i < m; i++) {
        int but; scanf("%d", &but);
        dead[but] = 1;
    }
    solve(cha);
    return 0;
}