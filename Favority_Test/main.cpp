#include <bits/stdc++.h>
using namespace std;
int arr[10];

int main() {
    int t;

    while(1) {
        random_device rd;
        mt19937  mt(rd());
        uniform_int_distribution<int> dist(1, 10);

        cout << dist(mt) << endl;
    }

    return 0;
}