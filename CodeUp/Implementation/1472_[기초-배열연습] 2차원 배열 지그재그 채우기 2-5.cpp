#include <iostream>
using namespace std;
int n, m, cnt = 1;
int a[100][100];
bool on;
int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			a[i][j] = cnt++;

	if (n % 2 == 0)
		on = false;
	else
		on = true;

	for (int i = n - 1; i >= 0; i--)
	{
		if (!on)
		{
			for (int j = 0; j < m; j++)
				cout << a[i][j] << " ";
			on = true;
		}
		else
		{
			for (int j = m - 1; j >= 0; j--)
				cout << a[i][j] << " ";
			on = false;
		}
		cout << endl;
	}
	return 0;
}