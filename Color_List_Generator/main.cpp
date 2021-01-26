#include <stdio.h>
#include <string.h>

char arr[301][25];

int main() {
    for(int i = 0; i < 143; i++) {
        scanf("%[^#]", arr[i]);
        fflush(stdin);
    }

    for(int i = 0; i < 143; i++) {
        arr[i][strlen(arr[i]) - 1] = '\0';
    }

    for(int i = 0; i < 143; i++) {
        printf("\"%s\",", arr[i]);
    }
    return 0;
}