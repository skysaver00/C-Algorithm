#include <stdio.h>
#include <stack>
#include <string.h>

using namespace std;

int main() {
    stack<char> left;
    stack<char> right;

    char arr[600001];
    scanf("%s", arr);

    int length = strlen(arr);
    for(int i = 0; i < strlen(arr); i++) {
        left.push(arr[i]);
    }

    int M;
    scanf("%d", &M);

    char letter[3];
    while(M--) {
        scanf("%s", letter);

        if(letter[0] == 'L') {
            if(left.empty()) continue;

            char t = left.top();
            left.pop();
            right.push(t);
        } else if(letter[0] == 'D') {
            if(right.empty()) continue;

            char t = right.top();
            right.pop();
            left.push(t);
        } else if(letter[0] == 'B') {
            if(left.empty()) continue;

            left.pop();
        } else {
            char add;
            scanf(" %c", &add);

            left.push(add);
        }
    }

    int i = 0;
    while(!left.empty()) {
        arr[i++] = left.top();
        left.pop();
    }

    int j = i;
    while(!right.empty()) {
        arr[j++] = right.top();
        right.pop();
    }

    arr[j] = '\0';
    for(int m = i - 1; m >= 0; m--) {
        printf("%c", arr[m]);
    }
    for(int m = i; m < j; m++) {
        printf("%c", arr[m]);
    }
    printf("\n");

    return 0;
}