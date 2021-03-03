#include <stdio.h>
#include <string.h>

int alltime[101];
int score[101];

int main() {
    int n, m , q;
    scanf("%d %d %d", &n, &m, &q);

    char test[5];
    for(int i = 1; i <= 100; i++) score[i] = -1;
    for(int i = 1; i <= n; i++) score[i] = 0;
    for(int i = 0; i < q; i++) {
        int time, team, quest;
        scanf("%d %d %d %s", &time, &team, &quest, test);

        alltime[team] += time;
        if(test[0] == 'A') {
            score[team]++;
        }
    }

    for(int i = 15; i >= 0; i--) {
        for(int j = 1; j <= 100; j++) {
            if(score[j] == i) {
                printf("%d %d %d\n", j, i, alltime[j]);
            }
        }
    }

    return 0;
}