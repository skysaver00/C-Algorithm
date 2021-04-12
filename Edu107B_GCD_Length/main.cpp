#include <bits/stdc++.h>
using namespace std;

bool arr[100000001];

int main() {
    int t;
    scanf("%d", &t);

    int num  = 100000001;

    arr[1] = 1;

    for(int i = 2; i <= sqrt(num); i++) {
        if(arr[i] == 1) continue;
        for(int j = i * i; j <= num; j+= i) arr[j] = 1;
    }

    for(int i = 2; i <= 10000; i++) {
        printf("%d\n", arr[i]);
    }

    while(t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);


    }
}