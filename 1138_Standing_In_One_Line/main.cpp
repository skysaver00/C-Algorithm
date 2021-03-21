#include <stdio.h>
struct person {
    int number;
    int left;
    int right;
};

int main() {
    int N;
    scanf("%d", &N);

    int num;
    struct person person[10];
    for(int i = 0; i < N; i++) {
        scanf("%d\n", &num);

        person[i].number = i + 1;
        person[i].left = num;
        person[i].right = N - num - i;
    }

    for(int i = 0; i < N; i++) {
        printf("%d %d %d\n", person[i].number, person[i].left, person[i].right);
    }

    return 0;
}