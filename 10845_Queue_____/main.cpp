#include <stdio.h>
#include <queue>

using namespace std;

int main() {
    queue<int> queue;

    int n;
    scanf("%d", &n);

    char word[10];
    int number;
    while(n--) {
        scanf("%s", word);
        if(word[0] == 'p' && word[1] == 'u') {
            scanf("%d", &number);
            queue.push(number);
        } else if(word[0] == 'p' && word[1] == 'o') {
            if(queue.empty()) {
                printf("-1\n");
                continue;
            }
            printf("%d\n", queue.front());
            queue.pop();
        } else if(word[0] == 's') {
            printf("%d\n", queue.size());
        } else if(word[0] == 'e') {
            printf("%d\n", queue.empty());
        } else if(word[0] == 'f') {
            if(queue.empty()) printf("-1\n");
            else printf("%d\n", queue.front());
        } else {
            if(queue.empty()) printf("-1\n");
            else printf("%d\n", queue.back());
        }
    }

    return 0;
}