#include <cstdio>
#include <cstring>
bool num[21];

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int val;
        char str[8];
        scanf("%s", str);

        if(strcmp(str, "add")) {
            scanf("%d", &val);
            num[val] = true;
        } else if(strcmp(str, "check")) {
            scanf("%d", &val);
            if(num[val]) printf("1\n");
            else printf("0\n");
        } else if(strcmp(str, "remove")) {
            scanf("%d", &val);
            
        } else if(strcmp(str, "toggle")) {

        } else if(strcmp(str, "all")) {

        } else {

        }
    }
}