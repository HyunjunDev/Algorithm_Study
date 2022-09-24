#include <iostream>
using namespace std;
int n, m;
int a[1000001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;

	for (int i = 2; i <= m; i++)
	{
		int j = 1;
		while (true)
		{
			int temp = i * j;
			if (temp > m || i > 1000000)
				break;
			a[i * j]++;
			j++;
		}
	}

	for (int i = n; i <= m; i++)
	{
		if (a[i] == 1)
			cout << i << '\n';
	}
	return 0;
}
