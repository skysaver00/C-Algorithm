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

/*#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer = 0;

    for(int i = 0; i < nums_len - 2; i++) {
        for(int j = i + 1; j < nums_len - 1; j++) {
            for(int k = j + 1; k < nums_len; k++) {
                int num = sqrt(nums[i] + nums[j] + nums[k]);

                bool check = true;
                for(int m = 2; m <= num; m++) {
                    if((nums[i] + nums[j] + nums[k]) % m == 0) {
                        check = false;
                    }
                }
                if(check == true) answer++;
            }
        }
    }

    return answer;
}

int main() {
    int arr1[5] = {1,2,3,4};
    int arr2[6] = {1,2,7,6,4};

    printf("%d\n", solution(arr1, 4));
    printf("%d\n", solution(arr2, 5));
}*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    long long t = n;

    int digit = 0;
    while(t) {
        t /= 10;
        digit++;
    }

    int* answer = (int*)malloc(sizeof(int) * digit);

    int i = 0; t = n;
    while(t) {
        int ans = t % 10;
        answer[i] = ans;
        printf("%d\n", answer[i]);
        i++;
        t/= 10;
    }

    return answer;
}

int main() {
    solution(12345);
}