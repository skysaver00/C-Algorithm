#include <stdio.h>

int arr[6];
void workedhours() {

    int s = arr[5] - arr[2];
    if(s < 0) {
        s += 60;
        arr[4]--;
    }
    int m = arr[4] - arr[1];
    if(m < 0) {
        m += 60;
        arr[3]--;
    }
    int h = arr[3] - arr[0];

    printf("%d %d %d\n", h, m, s);

    return;
}

int main() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 6; j++) {
            scanf("%d", &arr[j]);
        }

        workedhours();
    }

    return 0;
}