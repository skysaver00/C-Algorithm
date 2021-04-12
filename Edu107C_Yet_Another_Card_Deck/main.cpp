#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    deque<int> query;
    deque<int> dummy;

    for(int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);

        query.push_back(a);
    }

    for(int i = 0; i < q; i++) {
        int loc = 1;
        int b;
        scanf("%d", &b);

        while(1) {
            if(b != query.front()) {
                dummy.push_back(query.front());
                query.pop_front();
                loc++;
            } else {
                int k = query.front();
                query.pop_front();
                printf("%d ", loc);

                while(!dummy.empty()) {
                    query.push_front(dummy.back());
                    dummy.pop_back();
                }
                query.push_front(k);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}