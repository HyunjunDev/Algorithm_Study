#include <iostream>
using namespace std;
int n, nums[101];
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	for (int i = 0; i < n - 1; i++)
	{
		int idx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (nums[idx] > nums[j])
				idx = j;
		}
		int temp = nums[idx];
		nums[idx] = nums[i];
		nums[i] = temp;
	}
	for (int i = 0; i < n; i++)
		cout << nums[i] << ' ';
	return 0;
}