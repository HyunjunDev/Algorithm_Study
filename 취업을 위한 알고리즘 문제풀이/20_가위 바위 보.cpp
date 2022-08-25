#include <iostream>
using namespace std;
int n, nums[100];
int main()
{
	cin >> n;
	for (int i = 0; i < 2; i++)
	{
		int cnt = 0;
		for (int j = 0; j < n; j++)
		{
			int k;
			cin >> k;
			if (nums[cnt] == 0)
				nums[cnt] = k;
			else
			{
				if (nums[cnt] == k)
					cout << 'D' << endl;
				else if (nums[cnt] == 2 && k == 1)
					cout << 'A' << endl;
				else if (nums[cnt] == 1 && k == 3)
					cout << 'A' << endl;
				else if (nums[cnt] == 3 && k == 2)
					cout << 'A' << endl;
				else
					cout << 'B' << endl;
			}
			cnt++;
		}
	}
	return 0;
}