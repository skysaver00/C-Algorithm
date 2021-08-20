#include <iostream>
using namespace std;

bool arr[1000001];
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(long long i = 2; i <= 1000000; i++)
    {
        if(arr[i] == 1) continue;
        for(long long j = i * i; j <= 1000000; j += i) arr[j] = 1;
    }

    while(1) {
        int n; cin >> n;
        if(n == 0) break;

        for(int i = 2; i <= n - 2; i++)
        {
            if(arr[i] == 0 && arr[n - i] == 0)
            {
                printf("%d = %d + %d\n", n, i, n - i);
                break;
            }
        }
    }
    return 0;
}