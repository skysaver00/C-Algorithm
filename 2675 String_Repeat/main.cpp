#include <stdio.h>
#include <string.h>
char word[200];

int main() {
    int t;
    scanf("%d", &t);

    int R;
    char S[21];
    for(int i = 0; i < t; i++) {
        scanf("%d %s", &R, S);

        int type = 0;
        for(int i = 0; i < strlen(S); i++) {
            for(int j = 0; j < R; j++) {
                word[type] = S[i];
                type++;
            }
        }

        word[type] = '\0';
        printf("%s\n", word);
    }

    return 0;
}