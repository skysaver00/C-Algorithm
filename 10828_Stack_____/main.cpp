#include <stdio.h>
#include <stack>

using namespace std;

int main() {
    stack<int> stack;
    int N;
    scanf("%d", &N);

    int number;
    char word[10];
    while(N--) {
        scanf("%s", word);

        if(word[0] == 'p' && word[1] == 'u') {
            scanf("%d", &number);

            stack.push(number);
        } else if(word[0] == 'p' && word[1] == 'o') {
            if(stack.empty()) printf("-1\n");
            else {
                printf("%d\n", stack.top());
                stack.pop();
            }
        } else if(word[0] == 's') {
            printf("%d\n", stack.size());
        } else if(word[0] == 'e') {
            printf("%d\n", stack.empty());
        } else {
            if(stack.empty()) printf("-1\n");
            else printf("%d\n", stack.top());
        }
    }
    
    return 0;
}