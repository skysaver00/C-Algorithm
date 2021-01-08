#include <stdio.h>
#include <string.h>

char pokemon[100005][21];

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for(int i = 1; i <= N; i++) {
        scanf("%s", pokemon[i]);
    }

    char target[21];

    for(int i = 1; i <= M; i++) {
        scanf("%s", target);

        printf("%d\n", strcmp(target, pokemon[i]));
    }

    return 0;
}