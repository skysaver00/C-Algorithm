#include <iostream>
#include <algorithm>
using namespace std;

void swap(int i, int j) {
    int temp = i;
    i = j;
    j = temp;
}

void permutation(int arr[], int depth, int k) {
    if(depth == k) {
        for(int i = 0; i <= k; i++) {
            printf("%d ", arr[i]);
        }printf("\n");
    }
    else {
        for(int i = depth; i <= k; i++) {
            swap(arr[depth], arr[i]);
            permutation(arr, depth + 1, k);
            swap(arr[k], arr[i]);
        }
    }
}

int main() {
    int

    return 0;
}