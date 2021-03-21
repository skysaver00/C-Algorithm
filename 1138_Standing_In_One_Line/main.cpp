#include <stdio.h>
struct person {
    int number;
    int left;
    int right;
};

int stand[10];
int main() {
    int N;
    scanf("%d", &N);

    int num;
    struct person person[10];
    for(int i = 0; i < N; i++) {
        scanf("%d", &num);

        person[i].number = i + 1;
        person[i].left = num;
        person[i].right = N - num - i - 1;
    }

    for(int i = 0; i < N; i++) {
        printf("%d %d %d\n", person[i].number, person[i].left, person[i].right);
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(person[i].left == 0 && stand[j] == 0) {
                stand[j] = i + 1;
                break;
            } else if(stand[j] == 0) person[i].left--;
        }
    }

    for(int i = 0; i < N; i++) {
        printf("%d ", stand[i]);
    } printf("\n");

    return 0;
}