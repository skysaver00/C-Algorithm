#include <iostream>
using namespace std;

int arr[3];

int check_3(int num) {
    if(num % 3 == 0) return 0;
    else if(num % 3 == 1) return 1;
    else return 2;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;

            arr[check_3(a)]++;
        }

        if(arr[0] > (n/3)) {
            int min = arr[0] - (n/3);
            cnt += min;
            arr[0] -= min;
            arr[1] += min;
        }

        if(arr[1] > (n/3)) {
            int min = arr[1] - (n/3);
            cnt += min;
            arr[1] -= min;
            arr[2] += min;
        }

        if(arr[2] > (n/3)) {
            int min = arr[2] - (n/3);
            cnt += min;
            arr[2] -= min;
            arr[0] += min;
        }

        if(arr[0] > (n/3)) {
            int min = arr[0] - (n/3);
            cnt += min;
            arr[0] -= min;
            arr[1] += min;
        }

        if(arr[1] > (n/3)) {
            int min = arr[1] - (n/3);
            cnt += min;
            arr[1] -= min;
            arr[2] += min;
        }

        printf("%d\n", cnt);

        for(int i = 0; i < 3; i++) {
            arr[i] = 0;
        }
    }
}