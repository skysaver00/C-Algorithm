#include <stdio.h>
int arr[1001];

//Selection Sort 선택정렬
void Selection(int N) {
    for(int i = 0; i < N; i++) {
        int lowest = arr[i];
        for(int j = i; j < N; j++) {
            if(lowest > arr[j]) {
                int temp = lowest;
                lowest = arr[j];
                arr[j] = temp;
            }
        }
        arr[i] = lowest;
    }
}

void Bubble(int N) {
    for(int i = N - 1; i > 0; i--) {
        for(int j = 0 ; j < i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Insertion(int N) {
    for(int i = 0; i < N; i++) {
        int insert = arr[i];
        int j;
        for(j = i - 1; j >= 0; j--) {
            if(insert < arr[j]) arr[j + 1] = arr[j];
            else {
                break;
            }
        }
        arr[j + 1] = insert;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    Insertion(N);

    for(int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }
}