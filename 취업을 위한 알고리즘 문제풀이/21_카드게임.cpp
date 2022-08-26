#include <iostream>
using namespace std;
int nums[11], point[2], lastWin;
bool draw = true;
int main()
{
	for (int i = 0; i < 2; i++)
	{
		int cnt = 1;
		for (int j = 1; j <= 10; j++)
		{
			int k;
			cin >> k;
			if (i == 0)
				nums[cnt] = k;
			else
			{
				if (nums[cnt] > k)
				{
					point[0] += 3;
					lastWin = 0;
					draw = false;
				}
				else if (nums[cnt] < k)
				{
					point[1] += 3;
					lastWin = 1;
					draw = false;
				}
				else
				{
					point[0] += 1;
					point[1] += 1;
				}
			}
			cnt++;
		}
	}
	cout << point[0] << ' ' << point[1] << endl;
	if (draw)
		cout << 'D' << endl;
	else if (point[0] == point[1])
	{
		if (lastWin == 0)
			cout << 'A' << endl;
		else
			cout << 'B' << endl;
	}
	else if (point[0] > point[1])
		cout << 'A' << endl;
	else
		cout << 'B' << endl;
	return 0;
}