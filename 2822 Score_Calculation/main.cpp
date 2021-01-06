#include <stdio.h>

int main() {
    int score[8];
    int question[8];
    for(int i = 0; i < 8; i++) {
        scanf("%d", &score[i]);
        question[i] = i + 1;
    }

    for(int i = 7; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(score[j] <= score[j + 1]) {

                int temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;

                temp = question[j + 1];
                question[j + 1] = question[j];
                question[j] = temp;
            }
        }
    }

    for(int i = 4; i > 0; i --) {
        for(int j = 0; j < i; j++) {
            if(question[j] > question[j + 1]) {
                int temp = question[j];
                question[j] = question[j + 1];
                question[j + 1] = temp;
            }
        }
    }

    int sum = 0;
    for(int i = 0; i < 5; i++) sum += score[i];

    printf("%d\n", sum);
    for(int i = 0 ; i < 5; i++) printf("%d ", question[i]);
    printf("\n");

    return 0;
}