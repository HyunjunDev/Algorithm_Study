#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int vt, eg, a, b, c, ans;
int ch[10001];
struct Edge
{
	int e;
	int val;
	Edge(int a, int b)
	{
		e = a;
		val = b;
	}
	bool operator<(const Edge& b) const
	{
		return val > b.val;
	}
};

priority_queue<Edge> Q;
vector<pair<int, int>> map[100000];
int main()
{
	cin >> vt >> eg;
	for (int i = 0; i < eg; i++)
	{
		cin >> a >> b >> c;
		map[a].push_back({ b,c });
		map[b].push_back({ a,c });
	}
	Q.push(Edge(1, 0));
	while (!Q.empty())
	{
		int vertex = Q.top().e;
		int cost = Q.top().val;
		Q.pop();
		if (ch[vertex] == 0)
		{
			ans += cost;
			ch[vertex] = 1;
			for (int i = 0; i < map[vertex].size(); i++)
			{
				if (ch[map[vertex][i].first] == 0)
					Q.push(Edge(map[vertex][i].first, map[vertex][i].second));
			}
		}
	}
	cout << ans;
	return 0;
}