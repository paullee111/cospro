예제 10번 과제 
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int a, int b, int n) {
	int answer = 0;
	int q = n / a; 
	int w = n % a;
	int sum = 0;

	 
	for (int i = 0; i < 10; i++) {
		    sum = n % a; 
			n = (n/a)* b;
			answer += n; 
			n += sum; 
			
		}
		
	

	

	return answer;
}
int main() {
	int a1 = 5;
	int b1 = 2;
	int n1 = 100;
	int a2 = 3;
	int b2 = 1;
	int n2 = 20;

	printf("solution 함수의 반환 값: %d\n", solution(a1, b1, n1));

	printf("solution 함수의 반환 값: %d\n", solution(a2, b2, n2));
}
