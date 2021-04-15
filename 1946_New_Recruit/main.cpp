#include <bits/stdc++.h>
using namespace std;

int max(int i, int j) {
    return i > j ? i : j;
}

int arr[100001][2];

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        int doc = 0;
        int zoom = 0;

        for(int i = 0; i < n; i++) {
            scanf("%d %d", &arr[i][0], &arr[i][1]);
            doc = max(doc, arr[i][0]);
            zoom = max(doc, arr[i][1]);
        }

        int sum = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i][0] == doc || arr[i][1] == zoom) sum++;
        }

        cout << sum << endl;
    }
    return 0;
}