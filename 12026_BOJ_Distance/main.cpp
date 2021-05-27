#include <iostream>
#include <string>
using namespace std;

string str;
int arr[1001];

int min(int i, int j) {
    return i > j ? j : i;
}

int main() {
    int n;
    cin >> n;

    cin >> str;

    for(int i = 0; i <= n; i++) arr[i] = 10000000;
    arr[0] = 0;
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(str.at(i) == 'O') {
                if(str.at(j) == 'B') {
                    arr[i] = min(arr[j] + (i - j) * (i - j), arr[i]);
                }
            } else if(str.at(i) == 'J') {
                if(str.at(j) == 'O') {
                    arr[i] = min(arr[j] + (i - j) * (i - j), arr[i]);
                }
            } else if(str.at(i) == 'B') {
                if(str.at(j) == 'J') {
                    arr[i] = min(arr[j] + (i - j) * (i - j), arr[i]);
                }
            }
        }
    }

    if(arr[n - 1] == 10000000) printf("-1\n");
    else printf("%d\n", arr[n - 1]);

    return 0;
}