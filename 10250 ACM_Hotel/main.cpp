#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);

        int floor = N % H;
        int room = N / H;

        if(floor == 0) {
            floor += H;
            room -= 1;
        }

        printf("%d%02d\n", floor, room + 1);
    }

    return 0;
}