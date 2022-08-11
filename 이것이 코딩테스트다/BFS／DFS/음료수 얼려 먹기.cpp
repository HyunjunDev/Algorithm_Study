#include <iostream>
using namespace std;
int v[1000][1000];
int n, m, ans;

bool dfs(int y, int x)
{
	if (x < 0 || x >= m || y < 0 || y >= n)
		return false;
	if (v[y][x] == 0)
	{
		v[y][x] = 1;
		dfs(y, x + 1);
		dfs(y, x - 1);
		dfs(y - 1, x);
		dfs(y + 1, x);
		return true;
	}
	return false;
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%1d", &v[i][j]);


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (dfs(i, j))
				ans++;
		}
	}
	cout << ans;
	return 0;
}