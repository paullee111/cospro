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
