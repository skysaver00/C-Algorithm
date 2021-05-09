#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[500001];

bool binary(int number, int left, int right) {
    int mid;
    while(left <= right) {
        mid = (left + right) / 2;
        if(arr[mid] == number) return true;
        else if(arr[mid] > number) right = mid - 1;
        else if(arr[mid] < number) left = mid + 1;
    }
    return false;
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    sort(arr, arr + n);

    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        int number;
        scanf("%d", &number);

        bool tf = binary(number, 0, n);
        if(tf) printf("1 ");
        else printf("0 ");
    }
    return 0;
}