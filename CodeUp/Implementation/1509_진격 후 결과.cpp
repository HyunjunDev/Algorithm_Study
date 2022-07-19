#include <iostream>
using namespace std;
int a[20][20];
int s[10];
int main()
{
	for (int i = 1; i <= 11; i++)
		for (int j = 1; j <= 10; j++)
		{
			cin >> a[i][j];
			if (a[i][j] > 0 && i != 11)
				s[j] = 1;
			else if (a[i][j] < 0 && i != 11)
				s[j] = -1;
		}

	for (int i = 1; i <= 10; i++)
	{
		if (a[11][i] == 1)
		{
			if (s[i] == 1)
				cout << i << " crash" << endl;
			else if (s[i] == -1)
				cout << i << " fall" << endl;
			else
				cout << i << " safe" << endl;
		}
	}
	return 0;
}