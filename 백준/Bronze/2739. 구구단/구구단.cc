#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int M = 1; M <= 9; M++)
	{
		cout << N << " * " << M << " = " << N * M << endl;
	}
	return 0;
}