예제 3번
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int solution(int papers[], int papers_len, int k) {

    int length = 0;
    int* num = (int*)malloc(sizeof(int) * papers_len);
    for (int i = 0; i < papers_len; i++) {
        num[i] = papers[i];
    }

    for (int i = 0; i < papers_len; i++) {
        k = k - num[i];
        if (k > 0) {

            length++;
        }
        printf(" % d\n", k);
        printf(" % d\n", length);
    }

    return length;

}

int main() {

    int papers1[] = { 2,4,3,2,1 };

    int papers_len1 = 5;

    int k1 = 10;

    int ret1 = solution(papers1, papers_len1, k1);
    printf("solution 함수의 변환 값은 %d 입니다.\n", ret1);

    int papers2[] = { 2,4,3,2,1 };

    int papers_len2 = 5;

    int k2 = 14;

    int ret2 = solution(papers2, papers_len2, k2);


    printf("solution 함수의 변환 값은 %d 입니다.\n", ret2);

    return 0;

}
예제5번
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int solution(int socks[], int socks_len) {
    int answer = 0;
    int* sock = (int*)malloc(sizeof(int) * socks_len);
    int color[3] = { 0, };
    for (int i = 0; i < socks_len; i++) {
        sock[i] = socks[i]; 
    } 
    for (int i = 0; i < socks_len; i++) {
        color[sock[i] - 1]++;
    }
    answer = color[0] / 2 + color[1] / 2 + color[2] / 2;
    return answer;
}

int main() {
    int socks[] = { 1,2,1,3,2,1 };

    int socks_len = 6;

    int ret = solution(socks, socks_len);

    printf("solution %d\n", ret);

    return 0;

}
