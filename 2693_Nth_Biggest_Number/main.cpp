#include <cstdio>

int arr[10];

int swap(int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        for(int i = 0; i < 10; i++) scanf("%d", &arr[i]);

        for(int i = 1; i < 10; i++) {
            for(int j = i - 1; j >= 0; j--) {
                if(arr[i] < arr[j]) {
                    swap(i, j);
                    i = j;
                }
                else break;
            }
        }
        printf("%d\n", arr[7]);
    }
    return 0;
}