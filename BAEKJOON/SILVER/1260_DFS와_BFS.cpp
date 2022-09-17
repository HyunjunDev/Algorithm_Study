#include <iostream>
#include <queue>
#include <string.h>
using namespace std;
int n, m, v;
int graph[1001][1001];
bool visited[1001];
queue<int> q;

void DFS(int a)
{
	visited[a] = true;
	cout << a << ' ';
	for (int i = 1; i <= n; i++)
	{
		if (!visited[i] && graph[a][i] == 1)
			DFS(i);
	}
}

void BFS(int a)
{
	q.push(a);
	visited[a] = true;
	while (!q.empty())
	{
		int b = q.front();
		cout << b << ' ';
		q.pop();
		for (int i = 1; i <= n; i++)
		{
			if (!visited[i] && graph[b][i] == 1)
			{
				visited[i] = true;
				q.push(i);
			}
		}
	}
}

int main()
{
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++)
	{
		int h, j;
		cin >> h >> j;
		graph[j][h] = graph[h][j] = 1;
	}
	DFS(v);
	cout << endl;
	memset(visited, 0, sizeof(visited));
	BFS(v);
	return 0;
}