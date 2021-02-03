#include <stdio.h>

int arr[100001];
int arr2[100001];

void QuickSort(int start, int end) {
    int pivot = arr[start];
    int left = start + 1;
    int right = end;

    while(left <= right) {
        while(arr[left] <= pivot) left++;
        while(arr[right] > pivot) right--;

        if(left <= right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            temp = arr2[left];
            arr2[left] = arr2[right];
            arr2[right] = temp;
        }
    }

    if(start < end) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        temp = arr2[left];
        arr2[left] = arr2[right];
        arr2[right] = temp;

        QuickSort(start, right - 1);
        QuickSort(right + 1, end);
    }

    return;
}

void QuickSort_2(int start, int end) {
    int pivot = arr2[start];
    int left = start + 1;
    int right = end;

    while(left <= right) {
        while(arr2[left] <= pivot) left++;
        while(arr2[right] > pivot) right--;

        if(left <= right) {
            int temp = arr2[left];
            arr2[left] = arr2[right];
            arr2[right] = temp;
        }
    }

    if(start < end) {
        int temp = arr2[start];
        arr2[start] = arr2[right];
        arr2[right] = temp;

        QuickSort(start, right - 1);
        QuickSort(right + 1, end);
    }

    return;
}

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d %d", &arr[i], &arr2[i]);
    }

    QuickSort(0, N - 1);

    int x = arr2[0];
    int left = 0;
    int right = 0;
    for(int i = 1; i < N; i++) {
        if(x == arr2[i]) {
            right = i;
        }
        else {
            QuickSort_2(left, right - 1);
            left = right;
            right = i + 1;
        }
    }

    for(int i = 0; i < N; i++) {
        printf("%d %d\n", arr[i], arr2[i]);
    }

    return 0;
}