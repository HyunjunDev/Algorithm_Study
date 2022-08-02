#include <iostream>
#include <stack>
using namespace std;
int n, m, v[100001];
string ans;
stack<int> result;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> v[i];

	for (int i = 1, j = 0; i <= n; i++)
	{
		result.push(i);
		ans += '+';
		while (v[j] == result.top())
		{
			ans += '-';
			j++;
			result.pop();
			if (result.empty())
				break;
		}
	}

	if (!result.empty())
		cout << "NO";
	else
		for (int i = 0; i < ans.length(); i++)
			cout << ans[i] << '\n';

	return 0;
}