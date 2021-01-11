#include <stdio.h>
int arr[43];

int main() {
    int set;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &set);

        arr[set % 42]++;
    }

    int val = 0;
    for(int i = 0; i < 42; i++) {
        if(arr[i] != 0) val++;
    }

    printf("%d\n", val);

    return 0;
}