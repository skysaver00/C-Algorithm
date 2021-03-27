#include <stdio.h>
#include <algorithm>

using namespace std;
int cnt = 1;

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
                sum += min_arr - i + 1;
                reverse(arr + i, arr + min_arr + 1);
            }
            else sum++;
        }

        printf("Case #%d: %d\n", cnt, sum);
        cnt++;
    }
    return 0;
}