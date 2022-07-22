#include <iostream>
using namespace std;
int n, k;

int main()
{
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || j == 1 || i == n || j == n)
				cout << '*';
			else if (k == 1)
				cout << '*';
			else if ((i + j) % k == 1)
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
	}
	return 0;
}