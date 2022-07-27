#include <iostream>
using namespace std;
string s;
int xy[8][2] = { {-2,1},{-2,-1},{2,1},{2,-1},{-1,2},{-1,-2},{1,2},{1,-2} };
int x, y, cnt;

int main()
{
	cin >> s;
	x = s[0] - 96;
	y = s[1] - '0';

	for (int i = 0; i < 8; i++)
	{
		if ((x + xy[i][0] >= 1 && x + xy[i][0] <= 8) && (y + xy[i][1] >= 1 && y + xy[i][1] <= 8))
			cnt++;
	}

	cout << cnt;
	return 0;
}