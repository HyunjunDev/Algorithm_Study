#include <iostream>
using namespace std;
int n, nums[10001];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> nums[i];
	for (int i = 1; i <= n; i++)
	{
		int cnt = i;
		for (int j = 1; j < i; j++)
		{
			if (nums[i] > nums[j])
				cnt--;
		}
		cout << cnt << ' ';
	}
	return 0;
}