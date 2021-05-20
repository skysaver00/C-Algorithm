#include <iostream>
using namespace std;

int max(int i, int j) {
    return (i > j) ? i : j;
}

int arr[501];
int line[501];

int lis[501];

int main() {
    int t;
    cin >> t;

    int down = 0;
    for(int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        arr[a] = b;
        if (down < a) down = a;
    }

    int node = 0;
    for(int i = 1; i <= down; i++) {
        if(arr[i] == 0) continue;

        line[node] = arr[i];
        node++;
    }

    for(int i = 0; i < node; i++) {
        cout << line[i] << endl;
    }

    for(int i = 0; i < node; i++) {
        for(int j = 0; j < i; j++) {
            if(line[i] > line[j]) lis[i] = lis[j] + 1;
        }
    }

    for(int i = 0; i < node; i++) {
        cout << lis[i] << endl;
    }

    int ma = 0;
    for(int i = 0; i < node; i++) {
        ma = max(ma, lis[i]);
    }

    cout << ma << endl;
    cout << t - ma - 1 << endl;

    return 0;
}

    /*int value;

    int total = 0;
    while(1) {
        for (int i = 1; i <= down; i++) {
            value = 0;
            if (arr[i] == 0) continue;
            for (int j = 1; j < i; j++) {
                if (arr[j] > arr[i]) value++;
            }

            for (int j = i + 1; j <= 500; j++) {
                if (arr[j] < arr[i] && arr[j] != 0) {
                    value++;
                }
            }

            //cout << value << endl;
            line[i] = value;
        }

        int flag = 0;
        for(int i = 1; i <= down; i++) {
            if(line[i] != 0) {
                flag = 1;
            }
        }
        if(flag == 0) break;

        int ma = 0;
        int maLine = 0;
        for(int i = 1; i <= down; i++) {
            if(ma != max(ma, line[i])) {
                ma = line[i];
                maLine = i;
            }
        }

        arr[maLine] = 0;
        total++;

        for(int i = 1; i <= down; i++) line[i] = 0;
    }

    cout << total << endl;

    return 0;
}*/