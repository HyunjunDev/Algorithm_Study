#include <iostream>
using namespace std;
int n, nums[101];
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	for (int i = 0; i < n; i++)
	{
		int cnt = 1;
		for (int j = 0; j < n; j++)
		{
			if (nums[i] < nums[j])
				cnt++;
		}
		cout << cnt << ' ';
	}
	return 0;
}