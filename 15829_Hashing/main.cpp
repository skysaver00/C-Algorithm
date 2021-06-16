#include <cstdio>
char str[51];

int main() {
    int l; scanf("%d", &l);
    scanf("%s", str);

    long long sum = 0;
    long long r = 1;
    for(int i = 0; i < l; i++) {
        sum += (str[i] - 0x60) * r;
        r *= 31;
        r %= 1234567891;
        sum %= 1234567891;
    }

    printf("%d\n", sum);
    return 0;
}
