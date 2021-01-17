#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct person {
    int order;
    int age;
    string name;
};

bool cmp(const person p1, const person p2) {
    return p1.age == p2.age ? p1.order < p2.order : p1.age < p2.age;
}

int main() {
    int N = 0;
    scanf("%d", &N);

    person p;

    vector<person> v;

    for(int i = 0; i < N; i++) {
        p.order = i;
        cin >> p.age >> p.name;

        v.push_back(p);
    }

    stable_sort(v.begin(), v.end(), cmp);

    for(person p: v) {
        cout << p.age << " " << p.name << "\n";
    }

    return 0;
}