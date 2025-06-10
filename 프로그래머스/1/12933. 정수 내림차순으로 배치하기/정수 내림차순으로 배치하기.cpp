#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string s = to_string(n);                  // 정수를 문자열로 변환
    sort(s.begin(), s.end(), greater<char>()); // 내림차순 정렬
    return stoll(s);                          // 다시 정수로 변환하여 반환
}