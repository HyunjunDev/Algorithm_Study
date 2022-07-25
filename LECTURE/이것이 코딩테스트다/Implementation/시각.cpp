#include <iostream>
using namespace std;
int h, m, s, n, cnt;

int main()
{
	cin >> n;

	for (h = 0; h <= n; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			for (s = 0; s <= 59; s++)
			{
				if (s % 10 == 3 || m % 10 == 3 || h % 10 == 3 || s / 10 == 3 || m / 10 == 3 || h / 10 == 3)
					cnt++;
			}
		}
	}

	cout << cnt;
	return 0;
}