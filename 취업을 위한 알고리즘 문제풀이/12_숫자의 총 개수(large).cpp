#include <iostream>
using namespace std;
int n, cnt;
int main()
{
	cin >> n;
	for (int i = 1, j = 1, k = 10; i <= n; i++)
	{
		if (i == k)
		{
			j++;
			k *= 10;
		}
		cnt += j;
	}
	cout << cnt;
	return 0;
}