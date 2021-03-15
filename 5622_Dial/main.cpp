#include <stdio.h>
#include <string.h>

char arr[20];

int main() {
    scanf("%s", arr);

    int num = 0;
    for(int i = 0; i < strlen(arr); i++) {
        num += (arr[i] - 0x41) / 3 + 3;
        if(arr[i] == 'S') num--;
        if(arr[i] == 'V') num--;
        if(arr[i] == 'Y') num--;
        if(arr[i] == 'Z') num--;
    }

    printf("%d\n", num);
    return 0;
}