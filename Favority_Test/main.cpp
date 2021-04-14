#include <bits/stdc++.h>
using namespace std;
int arr[11];

int main() {
    int t;
    int n = 10000000;
    random_device rd;
    mt19937  mt(rd());
    uniform_real_distribution<double> dist(0.0, 10.0);

    while(arr[9] != 10000000) {

        for(int i = n; i < 8000000000; ++i) {
            int t = ceil(dist(mt));
            //cout << t << endl;
            n++;

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