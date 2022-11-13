#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int attack, int recovery, int hp) {
    int count = 0;

    while (true) {
        // count 1증가 (공격횟수)
        // 몬스터를 때린다 (hp 30[attack]감소)
        // 몬스터가 죽으면
            // 반복문 벗어남(중지)
        // hp[recovery]회복
        count += 1;
        hp -= attack;
        if (hp <= 0)
            break;
        hp += recovery;
    }
    return count;
}

int main() {
    int attack = 30;
    int recovery = 10;
    int hp = 60;
    int ret = solution(attack, recovery, hp);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
