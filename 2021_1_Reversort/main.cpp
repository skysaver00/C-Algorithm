#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);
        int arr[101];
        int sum = 0;

        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        for(int i = 0; i < n -1 ; i++) {
            int min = arr[i];
            int min_arr = -1;
            for(int j = i; j < n; j++) {
                if(min > arr[j]) {
                    min = arr[j];
                    min_arr = j;
                }
            }
            if(min_arr != -1) {
                arr[min_arr] = arr[i];
                arr[i] = min;
            }
            if(min_arr != -1) {
                sum += min_arr - i + 1;
                sort(arr + i, arr + min_arr);
            }
            else sum++;
        }

        printf("Case #%d: %d\n", i + 1, sum);
    }
    return 0;
}