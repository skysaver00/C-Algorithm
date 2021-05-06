#include <iostream>
#include <cmath>
using namespace std;
int arr[1000000];

int multiply(int a, int p) {
    int sum = 0;
    while(a != 0) {
        int val = a % 10;
        sum += floor(pow((double)val, (double)p) + 0.4);
        a /= 10;
    }

    return sum;
}

void check(int a, int p) {
    arr[a]++;
    if(arr[a] > 2) return;

    check(multiply(a, p), p);
}

int main() {
    int a, p;
    cin >> a >> p;

    check(a, p);
    int count = 0;

    for(int i = 0; i < 1000000; i++) {
        if(arr[i] == 1) count++;
    }
    cout << count << endl;
    return 0;
}