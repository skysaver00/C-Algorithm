#include <stdio.h>
#include <string.h>

char rot13(char c) {
    if(c >= 48 && c <= 57) return c;

    if(c >= 65 && c <= 90) {
        c += 13;
        if(c > 90) c -= 26;
        return c;
    }

    if(c >= 97 && c <= 122) {
        c += 13;
        if(c > 122) c -= 26;
        return c;
    }

    return c;
}

int main() {
    char rot[101];
    scanf("%s", rot);

    int len = strlen(rot);

    for(int i = 0; i < len; i++) {
        rot[i] = rot13(rot[i]);
        printf("%c ",rot[i]);
    }

    printf("%s\n", rot);

    return 0;
}