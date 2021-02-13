#include <stdio.h>
#include <string.h>

char sentence[40];
int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        while(getchar() != '\n');
        scanf("%[^\n]", sentence);

        if(sentence[0] >= 0x61) sentence[0] -= 0x20;
        else {}
        printf("%s\n", sentence);
    }

    return 0;
}