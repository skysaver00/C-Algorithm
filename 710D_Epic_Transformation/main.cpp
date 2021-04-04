#include <cstdio>
#include <algorithm>
using namespace std;
int arr[200001];
int inSort[200001];

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            scanf("%d", &inSort[i]);
        }
        sort(inSort, inSort + n);

        int rightNow = 0;
        arr[rightNow]++;
        for(int i = 1; i < n; i++) {
            if(arr[rightNow] != arr[i]) {
                rightNow = i;
                arr[rightNow]++;
            } else {
                arr[rightNow]++;
            }
        }

        for(int i = 0; i < rightNow; i++) {
            printf("%d ", arr[i]);
        }printf("\n");
    }

    return 0;
}