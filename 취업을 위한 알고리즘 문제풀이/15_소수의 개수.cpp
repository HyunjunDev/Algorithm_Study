#include <iostream>
using namespace std;
int n, cnt, nums[200001];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = i; j <= n; j += i)
			nums[j]++;
	for (int i = 1; i <= n; i++)
	{
		if (nums[i] == 2)
			cnt++;
	}
	cout << cnt;
	return 0;
}