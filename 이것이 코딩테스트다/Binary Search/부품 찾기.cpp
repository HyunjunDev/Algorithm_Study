#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, input;
vector<string> ans;
vector<int> nv;

void func(int input, int start, int end)
{
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (nv[mid] == input)
		{
			ans.push_back("yes");
			return;
		}
		else if (nv[mid] > input)
			end = mid - 1;
		else
			start = mid + 1;
	}
	ans.push_back("no");
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		nv.push_back(input);
	}
	sort(nv.begin(), nv.end());
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> input;
		func(input, 0, n - 1);
	}
	for (int i = 0; i < m; i++)
		cout << ans[i] << ' ';
	return 0;
}