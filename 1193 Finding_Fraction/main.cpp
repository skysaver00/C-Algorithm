#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int count = 0;

    int i = 0;
    int up = 1, down = 1;
    while(count < X) {
        i++;
        count += i;
    }

    if(i % 2 != 0) up = i;
    else down = i;

    count -= i;

    for(int j = count + 1; j < X; j++) {
        if(i % 2 != 0) {
            down++;
            up--;
        } else {
            down--;
            up++;
        }
    }

    printf("%d/%d\n", up, down);
}