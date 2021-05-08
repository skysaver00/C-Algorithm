#include <cstdio>
#include <algorithm>
using namespace std;

int arr[100001];

bool binSearch(int value, int left, int right) {
    int mid;

    while(left <= right) {
        mid = (left + right) / 2;

        if(arr[mid] == value) return true;
        else if(arr[mid] < value) left = mid + 1;
        else if(arr[mid] > value) right = mid - 1;
    }
    return false;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + n);

    int m;
    scanf("%d", &m);

    for(int i = 0; i < m; i++) {
        int val;
        scanf("%d", &val);

        bool so = binSearch(val, 0, n);
        if(so) printf("1\n");
        else printf("0\n");
    }

    return 0;
}