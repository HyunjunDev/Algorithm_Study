#include <iostream>
using namespace std;
int n, m;
int reverse(int x)
{
	int temp = 0;
	while (x > 0)
	{
		temp *= 10;
		temp += x % 10;
		x /= 10;
	}
	return temp;
}
bool isPrime(int x)
{
	if (x == 1)
		return false;
	for (int i = 2; i <= x / 2; i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		m = reverse(m);
		if (isPrime(m))
			cout << m << ' ';
	}
	return 0;
}