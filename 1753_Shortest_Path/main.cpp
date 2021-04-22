#include <bits/stdc++.h>
using namespace std;

int arr[300005][3];
int val[300005];

int main() {
    int v, e;
    int k;
    scanf("%d %d", &v, &e);
    scanf("%d", &k);


    for(int i = 0; i < e; i++) {
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }

    return 0;
}