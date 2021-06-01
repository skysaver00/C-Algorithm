#include <iostream>
using namespace std;
int arr[101][100001];
int w[101];
int v[101];
int n, k;

int max(int a, int b) {
    return (a > b) ? a : b;
}

void sort() {
    int key;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - 1 - i; j++) {
            if(w[j] > w[j + 1]) {
                int temp = w[j];
                w[j] = w[j + 1];
                w[j + 1] = temp;
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    cin >> n >> k;

    for(int i = 1; i <= n ; i++) {
        cin >> w[i] >> v[i];
    }

    sort();

    for(int i = 1; i <= n; i ++) {
        printf("%d %d\n", w[i], v[i]);
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            if(k - w[i] )
        }
    }



    return 0;
}