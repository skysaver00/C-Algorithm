#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World!\n";
    int len = strlen(str);

    printf("%d\n", len);
    for(int i = 0; i < len; i++) {
        printf("%s", &str[i]);
    }

    switch(len) {
        case 15:
            printf("case 15\n");
        case 14:
            printf("case 14\n");
        case 13:
            printf("case 13\n");
        case 12:
            printf("case 12\n");
        case 11:
            printf("case 11\n");
        case 10:
            printf("case 10\n");
        default:
            printf("Default\n"); //default는 오직 하나만 가능
        case 9:
            printf("case 9\n");
            break; //이 밑으로 실행 안됨
        case 8:
            printf("case 8\n");
    }
    char *str2 = "Taiwan Number One\n";
    printf("%s", str2);
    printf("%s", str2 + 3);
    printf("%s", str2 + 6);
    printf("%c\n", *str2);
    printf("%c\n", *(str2 + 3));
    printf("%c\n", *str2 + 3);
    printf("%s", &str2);
}