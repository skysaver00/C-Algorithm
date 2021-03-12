#include <stdio.h>
#include <algorithm>
using namespace std;

struct medal{
    int name;
    int gold;
    int silver;
    int bronze;
};

bool compare(const medal& m1, const medal& m2) {
    if(m1.gold == m2.gold) {
        if(m1.silver == m2.silver) {
            return m1.bronze < m2.bronze;
        }
        else {
            return m1.silver < m2.silver;
        }
    } else {
        return m1.gold < m2.gold;
    }
}

int main() {
    struct medal country[1001];
    int N, K;
    scanf("%d %d", &N, &K);

    for(int i = 0; i < N; i++) {
        scanf("%d %d %d %d", &country[i].name, &country[i].gold, &country[i].silver, &country[i].bronze);
    }

    sort(country, country + N, compare);

    for(int i = 0; i < N; i++) {
        printf("%d %d %d %d\n", country[i].name, country[i].gold, country[i].silver, country[i].bronze);
    }

    return 0;
}
