#include <iostream>
using namespace std;
int n, nums[1001];
int main()
{
	for (int i = 1; i <= 1000; i++)
		for (int j = 1; j <= 1000; j++)
			nums[j] = nums[j - 1] + j;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int m, k;
		cin >> m >> k;
		if (nums[m] == k)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}