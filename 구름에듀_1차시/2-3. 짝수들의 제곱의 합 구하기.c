#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int N, int M) {
    int answer = 0;
    // N ~ M������ �� �߿��� ¦���� ��
    for (int i = N; i <= M; i++) {
        // ¦��
        if (i % 2 == 0) {
            // �ŵ����� = i * i
            answer += i * i;
            // pow�Լ� ���
            // answer += pow(i, 2);
        }
    }
    return answer;
}
int main() {
    int N = 4;
    int M = 7;
    int ret = solution(N, M);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}