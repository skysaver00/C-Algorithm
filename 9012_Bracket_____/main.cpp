#include <stdio.h>
#include <string.h>
#include <stack>

using namespace std;

int main() {
    stack<char> stack;

    char arr[51];
    int T;
    scanf("%d", &T);

    while(T--) {
        scanf("%s", arr);

        int length = strlen(arr);
        for(int i = 0; i < length; i++) {
            if(arr[i] == '(') {
                if(stack.top() == ')') {
                    stack.pop();
                } else {
                    stack.push(arr[i]);
                }
            } else {
                if(stack.top() == '(')  {
                    stack.pop();
                } else {
                    stack.push(arr[i]);
                }
            }
        }

        if(stack.empty()) printf("YES\n");
        else printf("NO\n");

        while(!stack.empty()) stack.pop();
    }

    return 0;
}