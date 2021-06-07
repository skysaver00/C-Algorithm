#include <iostream>
using namespace std;
long long a, b, c;

long long pow(int a, int b, int c) {
    if(b == 0) return 1;

    long long n = pow(a, b / 2, c);
    long long tmp = (n * n) % c;

    if(b % 2 == 0) {
        return tmp;
    } else return (a * tmp) % c;
}

int main() {
    cin >> a >> b >> c;

    printf("%lld\n", pow(a, b, c));
    return 0;
}