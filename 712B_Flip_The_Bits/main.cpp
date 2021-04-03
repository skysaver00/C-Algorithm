#include <bits/stdc++.h>
using namespace std;

char arr[300005];
char arr2[300005];

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);

        scanf("%s", arr);
        scanf("%s", arr2);

        int len = strlen(arr);

        while(1) {
            for (int i = len - 1; i >= 0; i--) {
                if (arr[i] != arr2[i]) len = i;

            }
        }
    }

    return 0;
}