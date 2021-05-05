#include <iostream>
using namespace std;
long long arr[105];

int main() {
    int t;
    scanf("%d", &t);

    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;

    for(int i = 5; i <= 100; i++) {
        arr[i] = arr[i - 1] + arr[i - 4];
    }

    for(int i = 1; i <= 100; i++) {
        cout << arr[i] << endl;
    }

    while(t--) {

    }
}
