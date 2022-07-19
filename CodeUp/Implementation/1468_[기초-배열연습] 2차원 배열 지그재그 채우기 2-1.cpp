#include <iostream>
using namespace std;
int n, cnt = 1;
int a[100][100];
bool on;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = cnt++;

	for (int i = 0; i < n; i++)
	{
		if (!on)
		{
			for (int j = 0; j < n; j++)
				cout << a[i][j] << " ";
			on = true;
		}
		else
		{
			for (int j = n-1; j >= 0; j--)
				cout << a[i][j] << " ";
			on = false;
		}
		cout << endl;
	}
	return 0;
}