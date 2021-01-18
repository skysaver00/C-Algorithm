#include <stdio.h>
#include <algorithm>
int range[51];

using namespace std;

int main() {
    int L;
    scanf("%d", &L);

    for(int i = 0; i < L; i++) {
        scanf("%d", &range[i]);
    }

    sort(range, range + L);

    int n;
    scanf("%d", &n);

    int value = 0;

    for(int i = 0; i < L - 1; i++) {
        if(range[i] < n && range[i + 1] > n) {
            printf("yes\n");
            value = (n - range[i]) * (range[i + 1] - n);
            printf("%d\n", value);
            value += (range[i + 1] - n - 1);
        }
        else continue;
    }

    printf("%d\n", value);

    return 0;
}