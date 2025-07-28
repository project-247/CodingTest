#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0; // 결과값 누적 변수(없는 숫자들의 합)
    bool exists[10] = {0}; // 0~9의 숫자가 있는지 체크하는 배열
    
    // 입력 배열에 등장한 숫자 기록
    for (size_t i = 0; i < numbers_len; i++)
    {
        exists[numbers[i]] = true; // 등장한 숫자 인덱스 true로 체크
    }
    
    // 0~9까지 반복, exists가 false인 값만 누적
    for (int i = 0; i <= 9; i++)
    {
        if (!exists[i])
            answer += i; // numbers에 없는 숫자라면 더함
    }
    
    return answer;
}