#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int arr[10];
    for(int i = 0; i < 7; i++) scanf("%d", &arr[i]);

    sort(arr, arr + 7);

    int abc = arr[6]; //a + b + c
    int a = arr[0];

    int bc;
    for(int i = 1; i < 6; i++) {
        if(arr[i] == abc - a) {
            bc = arr[i];
        }
    }

    int b;
    int c;
    //남아있는거 b, c, ab, ac
    for(int i = 1; i < 6; i++) {
        b = arr[i];
        int cmp = bc - b;
        for(int j = i + 1; j < 6; j++) {
            if(cmp == arr[j]) {
                c = arr[j];
                printf("%d %d %d\n", a, b, c);
                return 0;
            }
        }
    }

    return 0;
}