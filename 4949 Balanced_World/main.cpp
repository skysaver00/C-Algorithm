#include <stdio.h>
#include <string.h>
void reverse(char s[]) {
    int i, j;
    char tmp;

    i = 0;
    j = strlen(s) - 1;
    while (i < j) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }
}

int main() {
    char buf[100];

    while(1) {
        scanf("%s", buf);
        if(strcmp(buf, ".") != 0) break;

        while (strcmp(buf, ".") != 0) {    //quit이 입력되면 종료
            reverse(buf);
            printf("> %s\n", buf);
            scanf("%s", buf);z
        }


    }

    return 0;
}