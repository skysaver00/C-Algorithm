#include <stdio.h>
#include <stack>
#include <string.h>
using namespace std;
char arr[101];

int main() {
    while(1) {
        gets(arr);
        if(strcmp(arr, ".") == false && strlen(arr) == 1) break;

        int flag = 0;

        stack<char> bracket;
        for(int i = 0; i < strlen(arr) - 1; i++) {
            if(arr[i] == '(' || arr[i] == '[') bracket.push(arr[i]);
            else if (arr[i] == ']' || arr[i] == ')') {
                if(bracket.empty() == true) {
                    flag = 1;
                    break;
                }
                if(bracket.top() == '[' && arr[i] == ']') bracket.pop();
                else if(bracket.top() == '(' && arr[i] == ')') bracket.pop();
                else bracket.push(arr[i]);
            }
        }

        if(bracket.empty() == false || flag == 1) printf("no\n");
        else printf("yes\n");
    }

    return 0;
}