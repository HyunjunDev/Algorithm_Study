#include <iostream>
#include <vector>
using namespace std;
int n, nums[101];
int main()
{
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	for (int i = 0; i < n - 1; i++)
	{
		if (v[i] > v[i + 1])
			nums[v[i] - v[i + 1]]++;
		else
			nums[v[i + 1] - v[i]]++;
	}
	for (int i = 1; i < n; i++)
	{
		if (nums[i] == 0)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}