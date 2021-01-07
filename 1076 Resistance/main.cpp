#include <stdio.h>
#include <string.h>

char color[10][10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};

int main() {
    int val[10];
    int t = 1;
    for(int i = 0; i < 10; i++) {
        val[i] = t;
        t *= 10;
    }

    char resist[3][10];
    long long sum = 0;

    scanf("%s %s %s", resist[0], resist[1], resist[2]);

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 10; j++) {
            if(strcmp(resist[i], color[j]) == 0) {
                sum += j;
            }
        }
        if(i == 0) sum *= 10;
    }

    for(int j = 0; j < 10; j++) {
        if(strcmp(resist[2], color[j]) == 0) sum = sum * val[j];
    }

    printf("%lld\n", sum);

    return 0;
}