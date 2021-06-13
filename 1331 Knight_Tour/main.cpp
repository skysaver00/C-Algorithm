#include <cstdio>
#include <cmath>
bool chess[7][7];

int main() {
    char c1, c2;
    int n1, n2;
    bool check = true;

    scanf(" %c%d", &c1, &n1);
    if(c1 <= 'F' && c1 >= 'A' && n1 <= 6 && n1 >= 1) {}
    else check = false;

    for(int i = 0; i < 35; i++) {
        scanf(" %c%d", &c2, &n2);
        printf("%c %d %c %d\n", c1, n1, c2, n2);

        if(c2 <= 'F' && c2 >= 'A' && n2 <= 6 && n2 >= 1) {}
        else check = false;

        int cnt = abs(c1 - c2) + abs(n1 - n2);
        printf("%d\n", cnt);
        if(cnt != 3) check = false;
        printf("%d\n", check);

        c1 = c2; n1 = n2;
    }

    if(check) printf("Valid\n");
    else printf("Invalid\n");

    return 0;
}