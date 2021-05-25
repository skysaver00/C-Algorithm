#include <stdio.h>
int arr[100001][3];
int check[100001];
int root[100001];

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int one, two;
        scanf("%d %d", &one, &two);

        for(int j = 0; j < 3; j++) {
            if(arr[one][j] == 0) {
                arr[one][j] = two;
                break;
            }
        }

        for(int j = 0; j < 3; j++) {
            if(arr[two][j] == 0) {
                arr[two][j] = one;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d %d %d\n", arr[i][0], arr[i][1], arr[i][2]);
    }

    return 0;
}