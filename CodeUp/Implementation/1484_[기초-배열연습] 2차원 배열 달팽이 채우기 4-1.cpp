#include <iostream>
using namespace std;
int a[101][101];
int n, m, x, y, cnt, maxX, maxY, minX, minY;
bool on, first;
int main()
{
	cin >> n >> m;
	cnt = y = 1;
	maxX = m;
	minX = 1;
	maxY = n;
	minY = 2;

	while (cnt <= n * m)
	{
		if (!on)
		{
			if (x < maxX)
			{
				x++;
				for (x; x <= maxX; x++)
					a[y][x] = cnt++;
				x--;
				maxX--;
			}
			else
			{
				x--;
				for (x; x >= minX; x--)
					a[y][x] = cnt++;
				x++;
				minX++;
			}
			on = true;
		}
		else
		{
			if (y < maxY)
			{
				y++;
				for (y; y <= maxY; y++)
					a[y][x] = cnt++;
				y--;
				maxY--;
			}
			else
			{
				y--;
				for (y; y >= minY; y--)
					a[y][x] = cnt++;
				y++;
				minY++;
			}
			on = false;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}