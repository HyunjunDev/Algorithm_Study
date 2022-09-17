#include <iostream>
#include <string.h>
int t, n, m, k, cnt[1000];
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,-1,1 };
int vec[50][50];
bool visited[50][50];
using namespace std;

void DFS(int x, int y)
{
	visited[x][y] = true;
	for (int i = 0; i < 4; i++)
	{
		int nx = dx[i] + x;
		int ny = dy[i] + y;
		if (ny < 0 || ny >= m || nx < 0 || nx >= n)
			continue;
		if (!visited[nx][ny] && vec[nx][ny] == 1)
			DFS(nx, ny);
	}
}

int main()
{
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		memset(vec, 0, sizeof(vec));
		memset(visited, 0, sizeof(visited));
		cin >> n >> m >> k;
		for (int j = 0; j < k; j++)
		{
			int x, y;
			cin >> x >> y;
			vec[x][y] = 1;
		}
		for (int j = 0; j < n; j++)
			for (int k = 0; k < m; k++)
			{
				if (!visited[j][k] && vec[j][k] == 1)
				{
					DFS(j, k);
					cnt[i]++;
				}
			}
	}

	for (int i = 0; i < t; i++)
		cout << cnt[i] << endl;
	return 0;
}