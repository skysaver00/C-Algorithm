#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string word;
string arr[1001];

int main() {
    cin >> word;

    int len = word.length();
    for(int i = 0; i < len; i++) arr[i] = word.substr(i);
    sort(arr, arr + len);

    for(int i = 0; i < len; i++) cout << arr[i] << "\n";
    return 0;
}