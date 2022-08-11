#include <iostream>
#include <queue>
using namespace std;
queue<pair<int, int>> q;
int dy[] = { 1,-1,0,0 };
int dx[] = { 0,0,1,-1 };
int graph[1000][1000];
int n, m;

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%1d", &graph[i][j]);
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

			if (graph[ny][nx] == 1)
			{
				graph[ny][nx] = graph[y][x] + 1;
				q.push({ ny,nx });
			}
			else
				continue;
		}
	}
	cout << graph[n - 1][m - 1];
	return 0;
}