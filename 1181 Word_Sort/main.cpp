#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

bool cmp (char *s1, char *s2) {
    return strcmp(s1, s2) < 0;
}

struct dict {
    char word[51];
};

int range[51];
bool T_F[20001];
int main() {
    struct dict dict[20001];

    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        scanf("%s", dict[i].word);
    }

    char temp[51];
    int len = 0;

    for(int i = 1; i <= 50; i++) {
        for(int j = 0; j < t; j++) {
            if(strlen(dict[j].word) == i) {
                strcpy(temp, dict[len].word);
                strcpy(dict[len].word, dict[j].word);
                strcpy(dict[j].word, temp);

                len++;
            }

            range[i] = len;
        }
    }

    char *s[20001];
    for(int i = 0; i < t; i++) {
        strcpy(s[i], dict[i].word);
    }


    for(int i = 0; i < 51; i++) {
        for(int j = range[i]; j < range[i + 1]; j++) {
            sort(s[range[i]], s[range[i]], cmp);
        }
    }

    for(int i = 0; i < t - 1; i++) {
        if(strcmp(dict[i].word, dict[i + 1].word) == 0) T_F[i + 1] = true;
    }

    for(int i = 0; i < t; i++) {
        if(T_F[i] != true) printf("%s\n", dict[i].word);
    }

    return 0;
}