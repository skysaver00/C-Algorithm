#include <iostream>
using namespace std;

int arr[100001];

int main() {
    for(int i = 0; i <= 100000; i++) arr[i] = 999999;
    int n;
    cin >> n;

    for(int j = 1; j < 316; j++) {
        for(int i = 1; i <= 100000; i++) {
            if(i * j * j > 100000) break;

            if(arr[i * j * j] > i) arr[i * j * j] = i;
        }
    }

    //for(int i = 1; i <= 5000; i++) printf("%d\n", arr[i]);

    for(int i = 2; i <= 100000; i++) {
        if(arr[i - 1] + 1 != arr[i]) continue;
        else arr[i] = arr[i - 1] + 1;
    }

    for(int i = 1; i <= 5000; i++) printf("%d\n", arr[i]);

    return 0;
}