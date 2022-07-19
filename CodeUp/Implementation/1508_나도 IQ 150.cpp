#include <iostream>
using namespace std;
int n, cnt = 1;
int a[21][21];
int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> a[i][1];

	for (int i = 2; i <= n; i++)
		for (int j = 2; j <= n; j++)
			a[i][j] = a[i][j - 1] - a[i - 1][j - 1];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}