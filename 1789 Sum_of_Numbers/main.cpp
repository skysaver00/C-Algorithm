#include <stdio.h>

int main() {
    long long S;
    scanf("%lld", &S);

    long long dummy = S;
    int N = 1;
    while(dummy > 0) {
        dummy = dummy - N;

        if(dummy > 0) N++;
    }

    if(dummy == 0) printf("%d\n", N);
    else printf("%d\n", N - 1);

    return 0;
}