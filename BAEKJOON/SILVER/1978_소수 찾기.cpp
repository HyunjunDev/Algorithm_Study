#include <iostream>
using namespace std;
int n, input, cnt;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 2; j <= input / 2; j++)
		{
			if (input % j == 0)
			{
				cnt++;
				break;
			}
		}
		if (input == 1)
			cnt++;
	}
	cout << n - cnt;
	return 0;
}