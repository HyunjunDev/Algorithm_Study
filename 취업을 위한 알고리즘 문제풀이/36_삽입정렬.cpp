#include <iostream>
using namespace std;
int n, nums[101];
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	for (int i = 1; i < n; i++)
	{
		int temp = nums[i];
		int j;
		for (j = i - 1; j >= 0; j--)
		{
			if (temp < nums[j])
				nums[j + 1] = nums[j];
			else
				break;
		}
		nums[j + 1] = temp;
	}
	for (int i = 0; i < n; i++)
		cout << nums[i] << ' ';
	return 0;
}