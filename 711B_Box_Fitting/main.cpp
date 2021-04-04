#include <cstdio>
#include <memory.h>
#include <algorithm>

using namespace std;

bool dec(int small, int big) {
    return small > big;
}
int arr[100005];
int space[100005];

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, w;
        scanf("%d %d", &n, &w);

        for(int i = 0; i < n; i++) {
            space[i] = w;
        }

        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        sort(arr, arr + n, dec);

        int arrNow = 0;
        while(1) {
            int rightNow = 0;
            int arrVal = arr[arrNow];
            while(arr[arrNow] == arrVal) {
                if(space[rightNow] < arrVal) {
                    rightNow++;
                } else {
                    space[rightNow] -= arrVal;
                    arrNow++;
                }
            }
            if(arrNow >= n) break;
            else {
                arrVal = arr[arrNow];
            }
        }

        for(int i = n - 1; i >= 0; i--) {
            if(space[i] != w) {
                printf("%d\n", i + 1);
                break;
            }
        }
    }

    return 0;
}