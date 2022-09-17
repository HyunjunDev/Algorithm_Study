#include <iostream>
using namespace std;
int n, m, cnt = -1;
int graph[101][101];
bool visited[101];
void DFS(int v)
{
	visited[v] = true;
	cnt++;
	for (int i = 1; i <= n; i++)
	{
		if (!visited[i] && graph[v][i] == 1)
			DFS(i);
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int h, j;
		cin >> h >> j;
		graph[h][j] = graph[j][h] = 1;
	}
	DFS(1);
	cout << cnt;
	return 0;
}