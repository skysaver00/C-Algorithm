#include <cstdio>
#include <cstring>
char number[100005];
int one[10];

int main() {
    scanf("%s", number);
    int len = strlen(number);

    bool ans = false;
    for(int i = 0; i < len; i++) {
        if(number[i] == '0') ans = true;
        one[number[i] - 0x30]++;
    }

    if(!ans) {
        printf("-1\n");
        return 0;
    }

    int sum = 0;
    for(int i = 9; i >= 0; i--) {
        for(int j = one[i]; j > 0; j--) {
            sum += i;
        }
    }

    if(sum % 3 != 0) {
        printf("-1\n");
        return 0;
    }

    for(int i = 9; i >= 0; i--) {
        for(int j = one[i]; j > 0; j--) {
            printf("%d", i);
        }
    }printf("\n");
    return 0;
}