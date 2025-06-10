#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    cout.precision(9);       // 소수점 9자리까지 출력
    cout << fixed;           // 고정 소수점 형식 사용
    cout << (double)A / B << endl;

    return 0;
}