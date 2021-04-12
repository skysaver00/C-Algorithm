#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int x = floor(pow(10, a - 1));
        int y = floor(pow(10, b - 1));
        int z = floor(pow(10, c - 1));

        printf("%d %d\n", x + z, y);
    }
}