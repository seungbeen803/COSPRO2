#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int N, int M) {
    int answer = 0;
    // N ~ M까지의 수 중에서 짝수인 수
    for (int i = N; i <= M; i++) {
        // 짝수
        if (i % 2 == 0) {
            // 거듭제곱 = i * i
            answer += i * i;
            // pow함수 사용
            // answer += pow(i, 2);
        }
    }
    return answer;
}
int main() {
    int N = 4;
    int M = 7;
    int ret = solution(N, M);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}