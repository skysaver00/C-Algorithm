#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr_5[1000];
int arr_4[1000];

int n_5[6];
int n_4[51];

int main() {
    srand((unsigned int) time(NULL));
    int count;

    int _5 = 0;
    int _4 = 0;

    printf("Count:");
    scanf("%d", &count);

    int res_5 = 0;
    int res_4 = 0;
    int res_3 = 0;
    int random = 0;

    for(int i = 0; i < count; i++) {
        random = rand() % 1000;

        if(_5 == 89) {
            printf("Fixed 5-star!\n");
            res_5++;
            _5 = 0;
            _4 = 0;

            continue;
        }
        if(_4 == 9) {
            printf("Fixed 4-star.\n");
            res_4++;
            _4 = 0;

            continue;
        }

        for(int j = 0; j < 6; j++) {
            int random2 = rand() % 1000;

            if(arr_5[random2] == 1) j--;
            else {
                arr_5[random2] = 1;
                n_5[j] = random2;
            }
        }

        for(int j = 0; j < 51; j++) {
            int random2 = rand() % 1000;

            if(arr_4[random2] == 1) j--;
            else if(arr_5[random2] == 1) j--;
            else {
                arr_4[random2] = 1;
                n_4[j] = random2;
            }
        }

        if(arr_5[random] == 1) {
            printf("5-star!\n");
            res_5++;
            _5 = 0;
        }
        else if(arr_4[random] == 1) {
            printf("4-star.\n");
            res_4++;
            _4 = 0;
        }
        else {
            printf("3-star...\n");
            res_3++;
        }

        _5++, _4++;

        for(int j = 0; j < 6; j++) {
            arr_5[n_5[j]] = 0;
            n_5[j] = 0;
        }
        for(int j = 0; j < 51; j++) {
            arr_4[n_4[j]] = 0;
            n_4[j] = 0;
        }
    }

    printf("------------------------------------\n");
    printf("Overall %d counts, 5-star: %d\n", count, res_5);
    printf("4-star: %d, 3-star: %d\n", res_4, res_3);

    return 0;
}