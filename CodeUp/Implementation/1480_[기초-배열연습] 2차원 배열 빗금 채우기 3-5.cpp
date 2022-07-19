#include <iostream>
using namespace std;
int n, m, cnt = 1;
int a[101][101];
int main()
{
	cin >> n >> m;
	
	for (int i = n+m; i >= 1; i--)
		for (int j = m; j >= 1; j--)
			for (int k = n; k >= 1; k--)
			{
				if (j + k == i)
				{
					a[k][j] = cnt++;
					break;
				}
			}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}