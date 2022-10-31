#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(char* words[], int words_len) {
    char* answer = "";

    // 동적할당
    answer = (char*)malloc(sizeof(char) * (words_len * 10 +1));

    // 배열 초기화
    answer[0] = 0;

    // 반복문
    for (int i = 0; i < words_len; i++) {
        if (strlen(words[i]) >= 5) {
            // strcat함수 사용하기
            // #pragma warning(disable:4996) // C4996 에러를 무시
            strcat(answer, words[i]);
        }
    }
    if (strlen(answer) == 0) {
        answer = "empty";
    }

    return answer;
}

int main() {
    char* words1[5] = { "my", "favorite", "color", "is", "violet" };
    int words_len1 = 5;
    char* ret1 = solution(words1, words_len1);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);

    char* words2[3] = { "yes", "i", "am" };
    int words_len2 = 3;
    char* ret2 = solution(words2, words_len2);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}