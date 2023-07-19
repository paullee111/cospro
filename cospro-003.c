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
1시 수업


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int ladders[][2], int ladders_len, int win){
	int answer = 0;
	int player[6] = { 1,2,3,4,5,6 };
	int **ladder = (int**)malloc(sizeof(int) * ladders_len);
	for (int i = 0; i < ladders_len; i++) {
		ladder[i] = (int*)malloc(sizeof(int) * 2);
	}
	for (int i = 0; i < ladders_len; i++) {
		for (int j = 0; j < 2; j++) {
			ladder[i][j] = ladders[i][j];
		}
	}

	for (int i = 0; i < ladders_len; i++) {
		int temp = 0;
		temp = player[ladder[i][0] - 1];
		player[ladder[i][0] - 1] = player[ladder[i][1] - 1];
		player[ladder[i][1] - 1] = temp;
	}
	
	answer = player[win - 1];

	return answer;
}
int main() {
	int ladders[5][2] = { {1,2}, {3,4}, {2,3}, {4,5}, {5,6} };
	int ladders_len = 5;
	int win = 3;
	int ret = solution(ladders, ladders_len, win);
	printf("solution 함수의 반환 값: %d\n", ret);

}

2시 수업
	
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h> 
#include<stdbool.h>

double x_new;
double y_new;
void Calculation(double x, double y, double angle_degree){
	double angle1 = angle_degree * M_PI / 180;
	double angle2 = atan2(y, x);
	double range = sqrt(x * x + y * y);

	x_new = cos(angle1 + angle2) * range;
	y_new = sin(angle1 + angle2) * range;
 	
	
	
	//x_new = cos(angle) * x - sin(angle) * y;
	//y_new = cos(angle) * y + sin(angle) * x;
}

int main()
{
	int x1 = 3;
	int y1 = 5;
	int angle_degree1 = 100;
	Calculation(x1, y1, angle_degree1); 
	printf(" return : %6.3f %6.3f \n", x_new, y_new); 
	int x2 = -1;
	int y2 = -3;
	int angle_degree2 = -60;
	Calculation(x2, y2, angle_degree2);
	printf(" return : %6.3f %6.3f \n", x_new, y_new);
}
예제 11번  (과제 )
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int* solution(int numer1, int denom1, int numer2, int denom2) {
	int top;
	int bot;
	int a=0;
	// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
	int* answer = (int*)malloc(sizeof (int)* 2);
	top = (numer1 * denom2) + (numer2 * denom1);
	bot = (denom1 * denom2);
	for (int i = 1; i < top; i++) {
		if (top % i == 0 && bot % i == 0) {
			a = i;
		}
	}
	answer[0] = (top / a); 
	answer[1] = (bot / a);



	return answer;
}

int main() {
	int numer1=1;
	int denom1=2;
	int numer2=3;
	int denom2=4; 
	int* result = solution(numer1, denom1, numer2, denom2);
	printf("solution 함수의 반환 값:%d %d\n", result[0], result[1]);

}
