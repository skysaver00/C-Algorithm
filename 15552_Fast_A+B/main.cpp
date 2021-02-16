#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T;
    cin >> T;

    short a, b;
    for(int i = 0; i < T; i++) {
        cin >> a >> b;
        cout << a - (-b) << "\n";
    }

    return 0;
}

/*int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0 ; i < T; i++) {
        short a, b;
        scanf("%hu %hu", &a, &b);
        printf("%hu\n", a + b);
    }

    return 0;
}*/