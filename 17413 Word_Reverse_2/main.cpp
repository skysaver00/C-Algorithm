#include <stdio.h>
#include <string.h>
#include <stack>

using namespace std;

char word[100004];
int main() {
    scanf("%[^\n]", word);
    stack<char> stack1;

    word[strlen(word)] = '\n';

    int flag = 0;
    for(int i = 0; i < strlen(word); i++) {
        if(word[i] == '<') {
            while(stack1.empty() != true) {
                printf("%c", stack1.top());
                stack1.pop();
            }
            printf("<");
            flag = 1;
        }
        else if(word[i] == '>') {
            printf(">");
            flag = 0;
        }
        else if(flag == 1) printf("%c", word[i]);
        else if(word[i] == ' ' || word[i] == '\n') {
            while(stack1.empty() != true) {
                printf("%c", stack1.top());
                stack1.pop();
            }
            printf(" ");
        }
        else {
            stack1.push(word[i]);
        }
    }
}