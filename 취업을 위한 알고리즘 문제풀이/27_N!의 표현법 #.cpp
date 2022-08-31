#include <iostream>
using namespace std;
int n, ans[1001];
int main()
{
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		int temp = i;
		int j = 2;
		while (true)
		{
			if (temp % j == 0)
			{
				ans[j]++;
				temp /= j;
			}
			else
				j++;
			if (temp <= 1)
				break;
		}

	}
	cout << n << "! = ";
	for (int i = 2; i <= n; i++)
	{
		if (ans[i] > 0)
			cout << ans[i] << ' ';
	}
	return 0;
}