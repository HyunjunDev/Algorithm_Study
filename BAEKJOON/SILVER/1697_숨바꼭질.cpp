#include <iostream>
#include <queue>
using namespace std;
queue<pair<int, int>> q;
bool visited[100001];
int n, k;
int main()
{
	cin >> n >> k;
	q.push({ n,0 });
	while (!q.empty())
	{
		int l = q.front().first;
		int t = q.front().second;
		q.pop();
		visited[l] = true;
		if (l == k)
		{
			cout << t;
			break;
		}
		if (!visited[l + 1] && l + 1 >= 0 && l + 1 <= 100000)
			q.push({ l + 1, t + 1 });
		if (!visited[l - 1] && l - 1 >= 0 && l - 1 <= 100000)
			q.push({ l - 1, t + 1 });
		if (!visited[l * 2] && l * 2 >= 0 && l * 2 <= 100000)
			q.push({ l * 2, t + 1 });
	}
	return 0;
}