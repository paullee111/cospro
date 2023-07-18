예제7번
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int solution(int temperature[], int temperature_len, int A, int B) {

	int answer = 0;
	int* num = (int*)malloc(sizeof(int) * temperature_len);
	int max=0;
	for (int i = 0; i < temperature_len; i++) {
		num[i] = temperature[i];
	}
	if (num[A] >= num[B]) {
		max = num[A];
		for (int i = B; i <= A; i++) {
			if (num[i] > max) {
				answer++;
			}

		}
	}
	else {
		max = num[B];
		for (int i = A; i <= B; i++) {
			if (num[i] > max) {
				answer++; 
			}

		}
	}
	

	return answer;

}

int main() {

	int temperature[] = { 3,2,1,5,4,3,3,2 };

	int temperature_len = 8;

	int A = 1;

	int B = 6;

	int ret = solution(temperature, temperature_len, A, B);

		printf("solution %d\n", ret);

			return 0;
}
//예제 8번
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int solution(int classes[], int len, int m)
{
	int answer = 0;
	int num=0;
	int num1 = 0;
	for (int i = 0; i < len; i++) {
		num+= classes[i] / m; 
		num1= classes[i] % m; 
		if (num1 <= 30 && num1>0) {
			num++;
		}
	}

	answer = num;
	return answer;

}

int main()
{

	int classes[] = { 80, 45, 33, 20 };

	int m = 30;
	int len = 4;
	int ret = solution(classes, len, m);

		printf("solution 함수의 반환 값은 %d 입니다", ret);

}
