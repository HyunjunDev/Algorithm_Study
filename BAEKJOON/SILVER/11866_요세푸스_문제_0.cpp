#include<iostream>
#include <queue>
using namespace std;
queue<int> q;
queue<int> ans;
int n, k, cnt;

int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		q.push(i);
	while (!q.empty())
	{
		cnt++;
		if (cnt == k)
		{
			ans.push(q.front());
			cnt = 0;
		}
		else
			q.push(q.front());
		q.pop();
	}
	cout << '<';
	while (!ans.empty())
	{
		cout << ans.front();
		ans.pop();
		if (!ans.empty())
			cout << ", ";
	}
	cout << '>';
	return 0;
}