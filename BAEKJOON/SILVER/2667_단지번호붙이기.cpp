#include <iostream>
#include <algorithm>
using namespace std;
int n, totalCnt, cnt[1000];
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,-1,1 };
int graph[100][100];
bool visited[100][100];

void DFS(int y, int x)
{
	visited[y][x] = true;
	cnt[totalCnt]++;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (nx < 0 || nx >= n || ny < 0 || ny >= n)
			continue;
		if (!visited[ny][nx] && graph[ny][nx] == 1)
			DFS(ny, nx);
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%1d", &graph[i][j]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j] && graph[i][j] == 1)
			{
				DFS(i, j);
				totalCnt++;
			}
		}
	}
	cout << totalCnt << endl;
	sort(cnt, cnt + totalCnt);
	for (int i = 0; i < totalCnt; i++)
		cout << cnt[i] << endl;
	return 0;
}