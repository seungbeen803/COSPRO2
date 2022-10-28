#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 5의 배수의 개수를 셉니다.
int func_a(int arr[], int arr_len) {
    int count = 0;
    for (int i = 0; i < arr_len; ++i)
        if (arr[i] % 5 == 0)
            count += 1;
    return count;
}

// 3의 배수와 5의 배수의 개수를 비교 후 다음을 수행합니다.
// 3의 배수가 많으면 "three", 5의 배수가 많으면 "five"
// 같으면 "same" return
char* func_b(int three, int five) {
    if (three > five)
        return "three";
    else if (three < five)
        return "five";
    else
        return "same";
}

// 3의 배수의 개수를 셉니다.
int func_c(int arr[], int arr_len) {
    int count = 0;
    for (int i = 0; i < arr_len; ++i)
        if (arr[i] % 3 == 0)
            count += 1;
    return count;
}

char* solution(int arr[], int arr_len) {
    // 1. 3의 배수의 개수를 셉니다.
    int count_three = func_c(arr, arr_len);

    // 2. 5의 배수의 개수를 셉니다.
    int count_five = func_a(arr, arr_len);

    // 3. 3의 배수와 5의 배수의 개수를 비교 후 다음을 수행합니다.
    char* answer = func_b(count_three, count_five);
    return answer;
}

int main() {
    int arr[10] = { 2, 3, 6, 9, 12, 15, 10, 20, 22, 25 };
    int arr_len = 10;
    char* ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}