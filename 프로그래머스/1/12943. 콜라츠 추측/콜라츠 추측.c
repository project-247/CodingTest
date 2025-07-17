#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long long num) {
    int answer = 0;
    
    while (num != 1 && answer < 500)
    {
        if (num % 2 == 0)
            num /= 2;
        else 
            num = num * 3 + 1;
        answer++;
    }
    
    return (num == 1) ? answer : -1;
}