#include <iostream>
using namespace std;
int n, result;

void fibo(int cur, int n1, int n2)
{
	int temp = n1 + n2;
	result = n1;
	if (cur < n)
		fibo(++cur, n2, temp);
}
int main()
{
	cin >> n;
	fibo(0, 0, 1);
	cout << result;
	return 0;
}