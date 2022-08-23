#include <iostream>
using namespace std;
int n, ans = 1;
int main()
{
	cin >> n;
	cout << 1;
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			cout << " + " << i;
			ans += i;
		}
	}
	cout << " = " << ans;
	return 0;
}