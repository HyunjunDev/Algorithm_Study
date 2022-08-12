#include <iostream>
#include <algorithm>
using namespace std;
int n, k, arr[2][1000000], ans;
int main()
{
	cin >> n >> k;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	sort(arr[0], arr[0] + n);
	sort(arr[1], arr[1] + n, greater<>());
	for (int i = 0; i < k; i++)
	{
		if (arr[0][i] < arr[1][i])
			swap(arr[0][i], arr[1][i]);
		else
			break;
	}
	for (int i = 0; i < n; i++)
		ans += arr[0][i];
	cout << ans;
	return 0;
}