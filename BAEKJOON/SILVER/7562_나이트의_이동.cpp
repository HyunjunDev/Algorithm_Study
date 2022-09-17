#include <iostream>
#include <string.h>
#include <tuple>
#include <queue>
using namespace std;
queue<tuple<int, int, int>> q;
int dx[] = { -2,-2,-1,-1,1,1,2,2 };
int dy[] = { 1,-1,2,-2,2,-2,1,-1 };
bool visited[300][300];
int l;

int BFS(int y, int x, int fy, int fx, int size)
{
	q.push({ y,x,0 });
	visited[y][x] = true;
	while (!q.empty())
	{
		int cy = get<0>(q.front());
		int cx = get<1>(q.front());
		int cnt = get<2>(q.front());
		q.pop();
		if (cy == fy && cx == fx)
			return cnt;
		for (int i = 0; i < 8; i++)
		{
			int ny = cy + dy[i];
			int nx = cx + dx[i];

			if (ny < 0 || ny >= size || nx < 0 || nx >= size)
				continue;

			if (!visited[ny][nx])
			{
				q.push({ ny,nx,cnt + 1 });
				visited[ny][nx] = true;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> l;
	for (int i = 0; i < l; i++)
	{
		memset(visited, 0, sizeof(visited));
		q = queue<tuple<int, int, int>>();
		int size, curx, cury, fx, fy;
		cin >> size >> cury >> curx >> fy >> fx;
		cout << BFS(cury, curx, fy, fx, size) << endl;
	}
	return 0;
}