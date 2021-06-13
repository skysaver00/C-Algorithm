#include <cstdio>
#include <cmath>
bool chess[7][7];

int main() {
    char mc;
    int mn;
    char c1, c2;
    int n1, n2;
    bool check = true;

    scanf(" %c%d", &c1, &n1);
    chess[c1 - 0x41][n1] = true;
    if(c1 <= 'F' && c1 >= 'A' && n1 <= 6 && n1 >= 1) {}
    else check = false;
    mc = c1, mn = n1;
    for(int i = 0; i < 35; i++) {
        scanf(" %c%d", &c2, &n2);
        //printf("%c %d %c %d\n", c1, n1, c2, n2);
        if(chess[c2 - 0x41][n2]) check = false;
        if(abs(c1 - c2) == 3 || abs(n1 - n2) == 3) check = false;

        if(c2 <= 'F' && c2 >= 'A' && n2 <= 6 && n2 >= 1) {}
        else check = false;

        int cnt = abs(c1 - c2) + abs(n1 - n2);
        //printf("%d\n", cnt);
        if(cnt != 3) check = false;
        //printf("%d\n", check);

        c1 = c2; n1 = n2;
        chess[c2 - 0x41][n2] = true;
    }
    if(abs(mc - c2) == 3 || abs(mn - n2) == 3) check = false;
    int cnt = abs(mc - c2) + abs(mn - n2);
    if(cnt != 3) check = false;

    if(check) printf("Valid\n");
    else printf("Invalid\n");

    return 0;
}