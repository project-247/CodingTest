#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int answer = 0; // 최종 합계 저장 변수
    
    // absolutes와 signs를 동시에 순회
    for (size_t i = 0; i < absolutes_len; ++i)
    {
        // signs[i]가 true면 양수, false면 음수로 더함
        if (signs[i])
            answer += absolutes[i];
        else 
            answer -= absolutes[i];
    }
    return answer;
}