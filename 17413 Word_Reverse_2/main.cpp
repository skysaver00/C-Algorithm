#include <stdio.h>
#include <string.h>
char word[100005];
char reverse[100005];


int main() {
    scanf("%[^\n]", word);

    int start = 0;
    int end = 0;
    int flag = 0;
    int cnt = 0;

    for(int i = 0; i < strlen(word); i++) {
        if(word[i] == '<') {
            flag = 1;
            end = i - 1;
        }
        if(word[i] == '>') {
            flag = 0;
            start = i + 1;
        }

        if(flag == 1) {
            reverse[cnt] = word[i];
        }

        if(flag == 0) {

        }

        cnt++;
    }
}