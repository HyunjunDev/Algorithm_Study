#include <iostream>
using namespace std;
int n, m, a, b, d, cnt = 1, map[51][51], dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 }, turn = 0;
bool visited[51][51];

int main()
{
	cin >> n >> m;
	cin >> a >> b >> d;

	visited[a][b] = true;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> map[i][j];

	while (true)
	{
		d -= 1;
		if (d < 0)
			d = 3;

		if (map[a + dy[d]][b + dx[d]] == 0 && !visited[a + dy[d]][b + dx[d]])
		{
			a += dy[d];
			b += dx[d];
			turn = 0;
			cnt++;
			visited[a][b] = true;
		}
		else
			turn++;

		if (turn == 4)
		{
			a -= dy[d];
			b -= dx[d];

			if (map[a][b] == 0)
			{
				visited[a][b] = true;
				turn = 0;
			}
			else
				break;
		}

	}

	cout << cnt;
	return 0;
}