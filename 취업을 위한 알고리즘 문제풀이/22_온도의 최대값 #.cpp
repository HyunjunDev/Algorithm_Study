#include <iostream>
using namespace std;
int n, k, nums[100000], imax = -99999999999, sum;
int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	for (int i = 0; i < k; i++)
		sum += nums[i];
	for (int i = k; i < n; i++)
	{
		sum += (nums[i] - nums[i - k]);
		if (sum > imax)
			imax = sum;
	}
	cout << imax;
	return 0;
}