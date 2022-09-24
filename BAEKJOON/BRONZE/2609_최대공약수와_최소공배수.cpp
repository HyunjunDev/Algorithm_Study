#include <iostream>
#include <algorithm>
using namespace std;
int n, m, large, small;

int gcd(int a, int b)
{
	int r;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	cin >> n >> m;
	if (n < m)
		swap(n, m);

	small = gcd(n, m);
	cout << small << endl;
	cout << n * m / small << endl;
	return 0;
}