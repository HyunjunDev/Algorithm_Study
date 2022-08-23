#include <iostream>
using namespace std;
int n, cnt;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int temp = i;
		while (temp > 0)
		{
			cnt += 1;
			temp /= 10;
		}
	}
	cout << cnt;
	return 0;
}