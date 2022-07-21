#include <iostream>
using namespace std;
int n;
int m;
int counting = 0;
int a[1000000];

void DFS(int current, int sum, int count2)
{
	if (sum > m)
		return;

	if (sum == m && count2 == 2)
	{
		counting++;
		return;
	}

	if (current >= n)
		return;

	if (count2 < 2)
	{
		DFS(current + 1, sum + a[current], count2 + 1);
		DFS(current + 1, sum, count2);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	DFS(0, 0, 0);
	cout << counting;
}