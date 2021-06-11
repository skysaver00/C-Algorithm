#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

map<string, int> pokem;
string pokem2[100001];

int main() {
    int N, M; cin >> N >> M;
    string nme;

    for(int i = 0; i < N; i++) {
        cin >> nme;
        pokem.insert(make_pair(nme, i + 1));
        pokem2[i] = nme;
    }

    for(int i = 0; i < N; i++) {
        cout << pokem[i].name << " " << pokem[i].value << "\n";
    }

    return 0;
}