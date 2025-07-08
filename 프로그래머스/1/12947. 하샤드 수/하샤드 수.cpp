#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum = 0;
    int temp = x;

    // 자릿수의 합 계산
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    // x가 자릿수의 합으로 나누어떨어지는지 확인
    return x % sum == 0;
}
