#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
vector<int> v;

int binary_search(int input, int start, int end)
{
	while (start <= end)
	{
		int mid = (start + end) / 2;
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			if (v[i] > mid)
				ans += v[i] - mid;
		}
		if (ans == input)
			return mid;
		else if (ans > input)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return -1;
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	cout << binary_search(m, 0, v.back());
	return 0;
}