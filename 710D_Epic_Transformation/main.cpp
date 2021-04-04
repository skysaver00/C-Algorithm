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
        int j = 0;
        arr[rightNow]++;
        for(int i = 1; i < n; i++) {
            if(inSort[j] != inSort[i]) {
                rightNow++; j = i;
                arr[rightNow]++;
            } else {
                arr[rightNow]++;
            }
        }

        sort(arr, arr + rightNow + 1);



        for(int i = 0; i <= rightNow; i++) {
            arr[i] = 0;
        }
    }

    return 0;
}