#include <iostream>
using namespace std;

int main()
{
	int A;
	cin >> A;

	if (1 > A || 4000 < A) cout << "error";
	else if ((A % 4 == 0 && A % 100 != 0) || (A % 400 == 0)) cout << 1;
	else cout << 0;
}