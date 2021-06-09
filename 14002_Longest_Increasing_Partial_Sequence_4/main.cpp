#include <iostream>
using namespace std;

int arr[1001];
int check[1001];

bool ckPer[1001];
int arr2[1001];

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i];

    check[1] = 0;
    for(int i = 2; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            if(arr[i] > arr[j]) {
                if(check[i] <= check[j]) check[i] = check[j] + 1;
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        if(!ckPer[check[i]]) {
            ckPer[check[i]] = true;
            arr2[check[i]] = arr[i];
        }
    }

    for(int i = 0; i <= n; i++) {
        if(arr2[i] == 0) break;
        printf("%d ", arr2[i]);
    }printf("\n");
    return 0;
}
