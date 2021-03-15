/*#include <stdio.h>
#include <string.h>

int arr[10001];
char nums[20005];
bool pkmon[200001];

int main() {
    scanf("%s", nums);

    int j = 0;
    for(int i = 0; i < strlen(nums); i++) {
        if(nums[i] >= 0x30 && nums[i] <= 0x39) {
            arr[j] = nums[i] - 0x30;
            j++;
        }
    }

    for(int i = 0; i < j; i++) {
        pkmon[arr[i]] = true;
    }

    int check = 0;
    for(int i = 0; i < j; i++) {
        if(pkmon[i] == true) check++;
    }

    if(check >= j / 2) printf("%d\n", j / 2);
    else printf("%d\n", check);
}*/

