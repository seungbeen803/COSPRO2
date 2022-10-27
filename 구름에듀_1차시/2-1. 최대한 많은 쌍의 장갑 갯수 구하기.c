#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const int max_product_number = 10;

// 3. 각 제품 번호별로 최대한 많은 장갑 쌍을 만드면서 개수를 셉니다.
// gloves : 가지고 있는 장갑 list (배열)
// gloves_len : gloves(배열)의 길이
int* func_a(int gloves[], int gloves_len) {
    // 인덱스와의 자리를 맞추기 위해서 +1을 한다.
    // 동적할당 -> 공간 생성
    int* counter = (int*)malloc(sizeof(int) * (max_product_number + 1));
    // 개수를 세기 전에 무조건 값을 0으로 초기화
    for (int i = 0; i <= max_product_number; ++i)
        counter[i] = 0;

    // counter[gloves[0]]++;
    // counter[gloves[1]]++;
    // counter[gloves[2]]++;
    // counter[gloves[3]]++;
    // counter[gloves[4]]++;

    // glove[0] : 2
    // glove[1] : 1
    // glove[2] : 2
    // glove[3] : 2
    // glove[4] : 4

    // 모든 원소를 찾는 반복문
    for (int i = 0; i < gloves_len; ++i)
        // 배열의 인덱스는 대괄호를 사용한다.
        // counter, gloves는 모두 배열
        counter[gloves[i]]++;

    return counter;
}

int solution(int left_gloves[], int left_gloves_len, int right_gloves[], int right_gloves_len) {
    // 1. 왼손 장갑이 제품 번호별로 몇 개씩 있는지 개수를 셉니다.
    int* left_counter = func_a(left_gloves, left_gloves_len);
    // 2. 오른손 장갑이 제품 번호별로 몇 개씩 있는 개수를 셉니다.
    int* right_counter = func_a(right_gloves, right_gloves_len);
    int total = 0;
    for (int i = 1; i <= max_product_number; ++i)
        total += min(left_counter[i], right_counter[i]);
    return total;
}

int main() {
    int left_gloves[5] = { 2, 1, 2, 2, 4 };
    int left_gloves_len = 5;
    int right_gloves[6] = { 1, 2, 2, 4, 4, 7 };
    int right_gloves_len = 6;
    int ret = solution(left_gloves, left_gloves_len, right_gloves, right_gloves_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}