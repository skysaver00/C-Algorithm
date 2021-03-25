#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> dfs[105];
int depth[105];
int arr[105];

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[n]);
        }

        int max = -9999;
        int max_loc;
        for(int i = 0; i < n; i++) {
            if(max < arr[i]) {
                max = arr[i];
                max_loc = i;
            }
        }

        sort(arr, arr + max_loc - 1);
        sort(arr + max_loc + 1, arr + n);

        for(int i = 0; i < n; i++) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}