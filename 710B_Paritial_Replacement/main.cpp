#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        char str[51];
        scanf("%s", str);

        int len = strlen(str);

        int cnt = 0;
        int start = 0;
        int end = 0;
        for(int i = 0; i < len; i++) {
            if(str[i] == '*') {
                str[i] = 'x';
                cnt++;
                start = i;
                break;
            }
        }

        for(int i = len - 1; i >= 0; i--) {
            if(str[i] == '*') {
                str[i] = 'x';
                cnt++;
                end = i;
                break;
            }
        }

        int deathCount = 0;
        for(int i = start; i <= end; i++) {
            if(deathCount == k){
                if(str[deathCount + start] != '*') {
                    int back = deathCount + start - 1;
                    while(back--) {
                        if(str[back] == '*') {
                            str[back] = 'x';
                            cnt++;
                            start = back;
                            deathCount = 0;
                            break;
                        }
                    }
                }
                if(str[deathCount + start] == '*') {
                    str[deathCount + start] = 'x';
                    cnt++;
                    start += deathCount;
                    deathCount = 0;
                }
            }
            else deathCount++;
        }

        printf("%d\n", cnt);
    }
}