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
//예제 6번(오전 과제)
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int solution(int programs[][2], int programs_len)
{
    int answer = 0;
    int used_tv[25] = { 0, };
    for (int i = 0; i < programs_len; i++) {
        for (int j = programs[i][0]; j < programs[i][1]; j++) {
            used_tv[j]++;
        }
    }
    for (int i = 0; i < 25; i++) {
        if (used_tv[i] >= 2) {
            answer++;
        }
    }
return answer;
}
int main() {

        int programs[4][2] = { {1,6},{3,5},{2,8},{4,7} };

    int programs_len = 4;

    int ret = solution(programs, programs_len);

    printf("solution %d\n", ret);
        return 0;
}
2023_07_18 1~2시 수업 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int solution(int korean, int english) {
    int answer = 0;
    int a= korean + english;  
    return answer= 210 - a; ;
}

int main() {
    int korean = 70;

    int english = 60;

    int ret = solution(korean, english);

    printf("solution %d\n", ret);

    return 0;

}
2시에서 3시 수업 (어려움 다시 복습필요)
	#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int height[][4], int height_len) {
    int count = 0;
    int cnt=0;
    int** num = (int**)malloc(sizeof(int*) * height_len);
    for (int i = 0; i < height_len; i++) {
        num[i] = (int*)malloc(sizeof(int) * 4);
    }

    for (int i = 0; i < height_len; i++) {
        for (int j = 0; j < 4; j++) { 
            num[i][j] = height[i][j];
        }
    }

    for (int i = 0; i < height_len; i++) {
        for (int j = 0; j < 4; j++) {
            if (i != 0) {
                if (num[i - 1][j] > num[i][j]) {
                    cnt++;
                }
            }
            else { cnt++; }

            if (i != height_len - 1) {
                if (num[i + 1][j] > num[i][j]) {
                    cnt++;
                }
            }
            else { cnt++; }

            if (j != 0) {
                if (num[i][j - 1] > num[i][j]) {
                    cnt++;
                }
            }
            else { cnt++; }

            if (j != 3) {
                if (num[i][j + 1] > num[i][j]) {
                    cnt++;
                }
            }
            else { cnt++; }

            if (cnt == 4) {
                count++;
            }
            cnt = 0;
        }
    }
    return count;
}

int main() {
    int height[][4] = { {3,6,2,8}, {7,3,4,2}, {8,6,7,3}, {5,3,2,9} };

    int height_len = 4;

    int ret = solution(height, height_len = 4);

    printf("solution %d\n", ret);

    return 0;

}
