#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;
int n, m, cnt = -1;
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,-1,1 };
queue<pair<int, int>> q;
int g[1000][1000];
bool visited[1000][1000];
bool noZero = true;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> m >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> g[i][j];
			if (g[i][j] == 1)
				q.push({ i,j });
			else if (g[i][j] == 0)
				noZero = false;
		}
	}

	if (noZero)
	{
		cout << '0';
		return 0;
	}
	while (!q.empty())
	{
		int size = q.size();
		cnt++;
		for (int i = 0; i < size; i++)
		{
			int y = q.front().first;
			int x = q.front().second;
			q.pop();
			for (int j = 0; j < 4; j++)
			{
				int ny = y + dy[j];
				int nx = x + dx[j];

				if (ny >= n || ny < 0 || nx >= m || nx < 0)
					continue;

				if (g[ny][nx] == 0 && !visited[ny][nx])
				{
					visited[ny][nx] = true;
					g[ny][nx] = 1;
					q.push({ ny,nx });
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (g[i][j] == 0)
			{
				cout << -1;
				return 0;
			}
		}
	}
	cout << cnt;
	return 0;
}