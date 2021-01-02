#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>

int main() {
    char Avalue[10001];
    char Bvalue[10001];

    scanf("%s %s", Avalue, Bvalue);

    printf("%d %d\n", strlen(Avalue), strlen(Bvalue));

    for(int i = 0; i < (strlen(Avalue) / 2); i++) {
        char temp = Avalue[i];
        Avalue[i] = Avalue[strlen(Avalue) - i - 1];
        Avalue[strlen(Avalue) - i - 1] = temp;
    }

    for(int i = 0; i < (strlen(Bvalue) / 2); i++) {
        char temp = Bvalue[i];
        Bvalue[i] = Bvalue[strlen(Bvalue) - i - 1];
        Bvalue[strlen(Bvalue) - i - 1] = temp;
    }

    printf("%s %s\n", Avalue, Bvalue);

    char sum[10002];

    int len = std::max(strlen(Avalue), strlen(Bvalue));

    for(int i = 0; i < len + 1; i++) {
        if(Avalue[i] >= 48 && Bvalue[i] >= 48) sum[i] = Avalue[i] + Bvalue[i] - 48;
        else sum[i] = Avalue[i] + Bvalue[i];

        printf("%s ", sum[i]);

        if(sum[i] > 57) {
            sum[i] -= 10;
            Avalue[i + 1] += 1;
        }
    }

    printf("%s\n", sum);
    printf("%d\n", sum[(strlen(sum))]);

    return 0;
}