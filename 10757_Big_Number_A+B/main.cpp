#include <stdio.h>
#include <string.h>
char a[10002];
char b[10002];
char res[10002];

int max(int a, int b) {
    if(a > b) return a;
    else return b;
}

void reverse(char * s) {
    int t = strlen(s);

    for(int i = 0; i < t / 2; i++) {
        char temp = s[i];
        s[i] = s[t - 1 - i];
        s[t - 1 - i] = temp;
    }
}

void add_0(char * s, int len) {
    for(int i = 0; i < len; i++) if(s[i] == 0) s[i] += 0x30;
}

void add(char * s, char * t) {
    int lena = strlen(s);
    int lenb = strlen(t);

    int longer = max(lena, lenb);

    if(lena < longer) add_0(a, longer);
    else add_0(b, longer);

    for(int i = 0; i <= longer; i++) {
        res[i] += a[i] + b[i] - 0x30;
        if(res[i] > 0x39) {
            res[i] -= 10;
            res[i + 1]++;
        }
    }

    if(res[longer] == -48) res[longer] = 0;
    else if(res[longer] == -47) res[longer] = 0x31;
}

int main() {
    scanf("%s %s", a, b);

    reverse(a);
    reverse(b);

    add(a, b);
    reverse(res);

    printf("%s\n", res);
}