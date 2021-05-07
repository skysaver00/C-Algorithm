#include <stdio.h>
int arr[1000001];
int check[1000001];
int len = 0;

bool divide(int i, int left, int right) {
    int mid;

    while(left <= right) {
        mid  = (left + right) / 2;
        //printf("%d %d %d %d %d\n", left, right, arr[i], check[mid - 1], check[mid]);
        if(arr[i] < check[mid] && arr[i] >= check[mid - 1]) {
            //printf("one\n");
            if(arr[i] == check[mid - 1]) return true;
            check[mid] = arr[i];
            return true;
        } else if(arr[i] < check[mid - 1]) {
            //printf("two\n");
            right = mid - 1;
        }
        else if(arr[i] >= check[mid]) {
            //printf("three\n");
            left = mid + 1;
        }
        //printf("%d %d %d\n\n", arr[i], check[mid - 1], check[mid]);
    }
    //printf("end: %d %d %d %d %d\n", left, right, arr[i], check[mid - 1], check[mid]);

    return false;
}

int solve(int i, int len2) {
    //printf("%d %d %d\n", arr[i], n, len2);
    if(len == 0) {
        check[len2] = arr[i];
        len++;
    } else {
        bool v = divide(i, 0, len2 - 1);

        if(!v) {
            if(arr[i] == check[len2 - 1]) return 0;
            check[len2] = arr[i];
            len++;
        }
    }

    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        check[i] = 99999999;
    }

    for(int i = 0; i < n; i++) {
        //printf("%d %d %d\n", i, n, len);
        solve(i, len);
    }

    int therefore = 0;
    for(int j = 0; j < n; j++) {
        if(check[j] != 99999999) therefore++;
        else break;
    }

    printf("%d\n", therefore);

    return 0;
}