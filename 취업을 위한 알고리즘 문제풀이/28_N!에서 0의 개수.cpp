#include <iostream>
using namespace std;
int n, cntTwo, cntFive;
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
				if (j == 2)
					cntTwo++;
				else if (j == 5)
					cntFive++;
				temp /= j;
			}
			else
				j++;
			if (temp <= 1)
				break;
		}
	}
	if (cntTwo < cntFive)
		cout << cntTwo;
	else
		cout << cntFive;
	return 0;
}