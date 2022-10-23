#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer;
	// 동적할당
	answer = (int*)malloc(sizeof(int) * shirt_size_len);

	// 6번 반복
	for (int i = 0; i < shirt_size_len; i++) {
		// 문자열 함수 사용해서 비교하기
		if (strcmp("XS", shirt_size[i]) == 0) answer[0]++;
		else if (strcmp("S", shirt_size[i]) == 0) answer[1]++;
		else if (strcmp("M", shirt_size[i]) == 0) answer[2]++;
		else if (strcmp("L", shirt_size[i]) == 0) answer[3]++;
		else if (strcmp("XL", shirt_size[i]) == 0) answer[4]++;
		else answer[5]++;
	}
	return answer;
}

int main() {
	char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);

	printf("solution 함수의 반환 값은 {");
	for (int i = 0; i < 6; i++) {
		if (i != 0) printf(", ");
		printf("%d", ret[i]);
	}
	printf("} 입니다.\n");
}
