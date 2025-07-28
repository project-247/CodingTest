#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* phone_number) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    size_t len = strlen(phone_number); // 전화번호 길이 계산
    char* answer = (char*)malloc(len + 1); // 동적할당 (문자열 + 널문자)
    
    // 뒷 4자리 제외한 부분을 '*' 로 채움
    for (size_t i = 0; i < len -4; ++i)
    {
        answer[i] = '*';
    }
    
    // 마지막 4자리는 원본 그대로 복사
    for (size_t i = len - 4; i < len; ++i)
    {
        answer[i] = phone_number[i];
    }
    
    answer[len] = '\0'; // 문자열 끝에 널문자 삽입(문자열 마무리)
    return answer;
}