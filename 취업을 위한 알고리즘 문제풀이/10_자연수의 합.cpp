#include <iostream>
using namespace std;
int n, m, imax = -1, ans;
int digit_sum(int x)
{
	int cnt = 0;
	while (x > 0)
	{
		cnt += x % 10;
		x /= 10;
	}
	return cnt;
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> m;
		int temp = digit_sum(m);
		if (imax < temp)
		{
			imax = temp;
			ans = m;
		}
		else if (imax == temp && m > ans)
			ans = m;
	}
	cout << ans;
	return 0;
}