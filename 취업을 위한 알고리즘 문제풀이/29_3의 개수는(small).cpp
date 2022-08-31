#include <iostream>
using namespace std;
int n, nums[10];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int temp = i;
		while (temp >= 1)
		{
			nums[temp % 10]++;
			temp /= 10;
		}
	}
	cout << nums[3];
	return 0;
}