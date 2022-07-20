#include <iostream>
using namespace std;
int n, k, cnt = 1;
char a[1001][1001];

int main()
{
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int result = cnt % (n - 1);

			if (n % k == 0)
				result = (cnt % (n - 1)) - 1;

			if (i == 1 || j == 1 || i == n || j == n)
				a[i][j] = '*';
			else if (a[i - 1][j + 1] == '*' && result % k == 0)
				a[i][j] = '*';
			else
				a[i][j] = ' ';
			cnt++;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << a[i][j];
		cout << endl;
	}
	return 0;
}