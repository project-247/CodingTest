#include <iostream>
#include <string>
using namespace std;

string solution(string str, int n) 
{
    string result = "";          // 결과 문자열 초기화
    for (int i = 0; i < n; i++)  // n번 반복
    {
        result += str;           // str을 결과에 이어붙임
    }
    return result;               // 반복된 문자열 반환
}

int main() 
{
    string str;
    int n;
    cin >> str >> n;             // 문자열과 정수 입력
    cout << solution(str, n);    // 반복된 문자열 출력
    return 0;
}
