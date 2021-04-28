#include <iostream>
using namespace std;
long long arr[40][40];

int main() {
    int r, c, w;
    cin >> r >> c >> w;

    for(int i = 0; i < 35; i++) {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }

    /*for(int i = 0; i < 35; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%lld ", arr[i][j]);
        }printf("\n");
    }printf("\n");*/

    for(int i = 2; i < 35; i++) {
        for(int j = 1; j < i; j++) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }//printf("\n");
    }//printf("\n");

    /*for(int i = 0; i < 35; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%lld ", arr[i][j]);
        }printf("\n");
    }printf("\n");*/

    long long sum = 0;
    int l = 0;
    for(int i = r - 1; i < r - 1 + w; i++) {
        for(int j = c - 1; j <= c - 1 + l; j++) {
            sum += arr[i][j];
            //printf("%d %d %d\n", sum, i, j);
        }
        l++;
    }

    printf("%lld\n", sum);

    return 0;
}