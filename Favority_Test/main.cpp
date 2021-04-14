#include <bits/stdc++.h>
using namespace std;
int arr[11];

int main() {
    int t;

    while(arr[9] != 100000) {
        random_device rd;
        mt19937  mt(rd());
        uniform_int_distribution<int> dist(1, 10);

        for(int i = 0; i < 8000; i++) {
            int t = dist(mt);

            if(t == 9) {
                arr[t]++;
                break;
            }
            else arr[t]++;
        }
    }

    for(int i = 1; i <= 10; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}