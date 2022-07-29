#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int n, k;
vector<int> v, ans;
stack<int> s;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		v.push_back(k);
	}
	for (int i = n - 1; i >= 0; i--)
	{
		while (!s.empty() && s.top() <= v[i])
			s.pop();
		if (s.empty())
			ans.push_back(-1);
		else
			ans.push_back(s.top());

		s.push(v[i]);
	}

	for (int i = n - 1; i >= 0; i--)
		cout << ans[i] << ' ';

	return 0;
}