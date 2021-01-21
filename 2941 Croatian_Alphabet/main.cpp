#include <stdio.h>
#include <string.h>

char word[101];
int letter;

int main() {
    scanf("%s", word);

    letter = strlen(word);
    for(int i = 0; i < strlen(word) - 1; i++) {
        if(word[i] == 'c') {
            if(word[i + 1] == '=') {
                letter -= 1;
                word[i] = '0';
                word[i + 1] = '0';
            }
            else if(word[i + 1] == '-') {
                letter -= 1;
                word[i] = '0';
                word[i + 1] = '0';
            }
        }
        else if(word[i] == 'd') {
            if(word[i + 1] == 'z' && word[i + 2] == '=') {
                letter -= 2;
                word[i] = '0';
                word[i + 1] = '0';
                word[i + 2] = '0';
            }
            else if(word[i + 1] == '-') {
                letter -= 1;
                word[i] = '0';
                word[i + 1] = '0';
            }
        }
        else if(word[i] == 'l' && word[i + 1] == 'j') {
            letter -= 1;
            word[i] = '0';
            word[i + 1] = '0';
        }
        else if(word[i] == 'n' && word[i + 1] == 'j') {
            letter -= 1;
            word[i] = '0';
            word[i + 1] = '0';
        }
        else if(word[i] == 's' && word[i + 1] == '=') {
            letter -= 1;
            word[i] = '0';
            word[i + 1] = '0';
        }
        else if(word[i] == 'z' && word[i + 1] == '=') {
            letter -= 1;
            word[i] = '0';
            word[i + 1] = '0';
        }
        else continue;
    }
    printf("%d\n", letter);

    return 0;
}