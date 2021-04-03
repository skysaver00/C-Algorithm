#include <bits/stdc++.h>
using namespace std;

char str[300005];

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        scanf("%s", str);

        int len = strlen(str);
        bool flag = false;
        for(int i = 0; i < len; i++) {
            if(str[i] != 'a') {
                flag = true;
                break;
            }
        }

        if(!flag) {
            printf("NO\n");
            continue;
        } else flag = false;

        for(int i = 0; i < len; i++) {
            string str2 = str;
            str2.insert(i, "a");

            int len2 = str2.length();
            int dvd = len2 / 2;

            for(int j = 0; j < dvd; j++) {
                if(str2.at(j) != str2.at(len2 - 1 - j)) {
                    printf("YES\n");
                    strcpy(str, str2.c_str());
                    printf("%s\n", str);
                    flag = true;
                    break;
                }
            }

            if(flag) break;
        }
    }
    return 0;
}