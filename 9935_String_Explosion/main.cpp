#include <cstdio>
#include <cstring>

char str[1000005];
char bomb[40];
char res[1000005];

int main() {
    scanf("%s %s", str, bomb);

    int index = 0;
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        res[index] = str[i];
        index++;

        int bLen = strlen(bomb);
        if(res[index - 1] == bomb[bLen - 1]) {
            if(index - bLen < 0) continue;
            bool detect = true;
            for(int j = 0; j < bLen; j++) {
                if(res[index - j - 1] != bomb[bLen - j - 1]) {
                    detect = false;
                    break;
                }
            }

            if(detect) index = index - bLen;
        }
    }

    if(index == 0) printf("FRULA\n");
    else printf("%s\n", res);

    return 0;
}