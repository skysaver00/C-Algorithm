#include <stdio.h>
#include <math.h>
int arr[8002];

int main() {
    int N;
    scanf("%d", &N);

    int val;
    for(int i = 0; i < N; i++) {
        scanf("%d", &val);

        arr[val + 4000] += 1;
    }

    double question_1 = 0;
    for(int i = 0; i <= 8000; i++) {
        question_1 += ((i - 4000) * arr[i]);
    }
    question_1 /= N;

    int question_2_num = 0;
    int question_2 = 0;
    for(int i = 0; i <= 8000; i++) {
        question_2_num += arr[i];
        if(question_2_num >= (N / 2) + 1) {
            question_2 = i - 4000;
            break;
        }
    }

    int question_3_num = -9999;
    int question_3[2];
    question_3[0] = 9999; question_3[1] = 9999;
    for(int i = 0; i <= 8000; i++) {
        if(question_3_num < arr[i]) {
            question_3[0] = i - 4000;
            question_3[1] = 9999;
            question_3_num = arr[i];
        }
        else if(question_3_num == arr[i]) {
            if(question_3[1] != 9999) continue;
            else question_3[1] = i - 4000;
        }
    }

    int question_4_min;
    int question_4_max;
    for(int i = 0; i <= 8000; i++) {
        if(arr[i] != 0) {
            question_4_min = i - 4000;
            break;
        }
    }
    for(int i = 8000; i >= 0; i--) {
        if(arr[i] != 0) {
            question_4_max = i - 4000;
            break;
        }
    }

    printf("%.0lf\n", floor(question_1 + 0.5));
    printf("%d\n", question_2);
    if(question_3[1] != 9999) printf("%d\n", question_3[1]);
    else printf("%d\n", question_3[0]);
    printf("%d\n", question_4_max - question_4_min);

    return 0;
}