#include <iostream>
#include <stack>
using namespace std;
int n, k;
stack<pair<int, int>> s;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> k;
		while (!s.empty())
		{
			if (s.top().first > k)
			{
				cout << s.top().second << ' ';
				break;
			}
			s.pop();
		}
		if (s.empty())
			cout << 0 << ' ';
		s.push(make_pair(k, i));
	}
	return 0;
}