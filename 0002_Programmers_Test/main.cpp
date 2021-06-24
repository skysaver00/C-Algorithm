#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

vector<long long> numbers;
vector<long long> answer;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        long long num;
        cin >> num;
        numbers.push_back(num);
    }

    int len = numbers.size();
    for(int i = 0; i < len; i++) {
        long long val = numbers[i];
        int num = 0;
        while(1) {
            int ck = val % 2;
            if(ck == 0) break;
            val /= 2;
            num++;
        }

        long long inc = 1;
        if(num <= 1) answer.push_back(numbers[i] + inc);
        else answer.push_back(numbers[i] + (inc << (num - 1)));
        cout << answer[i] << " ";
    }

    return 0;
}