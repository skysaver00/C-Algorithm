#include <stdio.h>
#include <string.h>

int main() {
    while(1) {
        char t[5];
        scanf("%s", t);

        if(strcmp(t, "0") == 0) break;

        int left = 0;
        int right = strlen(t) - 1;
        int flag = 0;

        if(strlen(t) % 2 == 0) {
            while(left < right) {
                if(t[left] == t[right]) {
                    left++;
                    right--;
                }
                else {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0) printf("yes\n");
            else printf("no\n");
        }
        else if(strlen(t) % 2 != 0) {
            while(left != right) {
                if(t[left] == t[right]) {
                    left++;
                    right--;
                }
                else {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) printf("yes\n");
            else printf("no\n");
        }
    }

    return 0;
}