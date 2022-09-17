#include <iostream>
#include <queue>
using namespace std;
int n, m;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
queue<pair<int, int>> q;
int g[100][100];
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%1d", &g[i][j]);

	q.push({ 0,0 });

	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int ny = dy[i] + y;
			int nx = dx[i] + x;

			if (ny < 0 || ny >= n || nx < 0 || nx >= m)
				continue;

			if (g[ny][nx] == 1)
			{
				g[ny][nx] = g[y][x] + 1;
				q.push({ ny,nx });
			}
		}
	}
	cout << g[n - 1][m - 1];
	return 0;
}