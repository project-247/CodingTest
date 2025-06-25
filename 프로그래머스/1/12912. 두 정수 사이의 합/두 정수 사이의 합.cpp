#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    // a와 b 중 작은 값과 큰 값을 결정
    int start = min(a, b);
    int end = max(a, b);

    // 등차수열의 합 공식 사용: (첫항 + 끝항) * 항의 개수 / 2
    return static_cast<long long>(start + end) * (end - start + 1) / 2;
}