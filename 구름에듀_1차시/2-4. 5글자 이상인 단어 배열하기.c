#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* words[], int words_len) {
    char* answer = "";

    // �����Ҵ�
    answer = (int*)malloc(sizeof(int) * words_len);

    // �迭 �ʱ�ȭ
    answer[0] = 0;

    // �ݺ���
    for (int i = 0; i < words_len; i++) {
        if (strlen(words[i]) >= 5) {
            // strcat�Լ� ����ϱ�
            // strcat_s(
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

    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret1);

    char* words2[3] = { "yes", "i", "am" };
    int words_len2 = 3;
    char* ret2 = solution(words2, words_len2);

    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret2);
}