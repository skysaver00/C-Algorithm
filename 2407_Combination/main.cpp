#include <cstdio>
using namespace std;

long long arr[101][101];

void makeIT() {
    for(int i = 1; i <= 100; i++) {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }

    for(int i = 2; i <= 100; i++) {
        for(int j = 1; j < i; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }
}

int main() {
    makeIT();

    for(int i = 0 ; i <= 100; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%lld ", arr[i][j]);
        }printf("\n");
    }printf("\n");

    return 0;
}//cannot solve Because it needs big integer.