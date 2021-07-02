#include <cstdio>
#include <cstring>
int lcs[1002][1002];
char str1[1001];
char str2[1001];

int MAX(int i, int j) {
    return i > j ? i : j;
}

int main() {
    scanf("%s %s", str1, str2);
    int len1, len2;
    len1 = strlen(str1);
    len2 = strlen(str2);

    for(int i = 1; i <= len2; i++) {
        for(int j = 1; j <= len1; j++) {
            if(str1[j - 1] == str2[i - 1]) {
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            } else {
                lcs[i][j] = MAX(lcs[i][j - 1], lcs[i - 1][j]);
            }
        }
    }

    for(int i = 0; i <= len2; i++) {
        for(int j = 0; j <= len1; j++) {
            printf("%d\n", lcs[i][j]);
        }
    }

    return 0;
}