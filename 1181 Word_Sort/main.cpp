#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
    if(a.size() == b.size()) return a < b;
    else return a.size() < b.size();
}

int main() {
    vector <string> a;
    string temp;

    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        string word;
        cin >> word;
        a.push_back(word);
    }

    sort(a.begin(), a.end(), cmp);

    for(int i = 0; i < N; i++) {
        if(temp == a[i]) continue;
        cout << a[i] << "\n";
        temp = a[i];
    }
}