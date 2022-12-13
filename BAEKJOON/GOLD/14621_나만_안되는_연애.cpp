#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int unf[1001];
char s[1001];
bool visited[1001];
int n, m, a, b, c, ans;
struct Edge
{
	int v1, v2, val;
	Edge(int a, int b, int c)
	{
		v1 = a;
		v2 = b;
		val = c;
	}
	bool operator<(Edge& b)
	{
		return val < b.val;
	}
};

int Find(int v)
{
	if (v == unf[v])
		return v;
	else
		return unf[v] = Find(unf[v]);
}

void Union(int a, int b)
{
	int x = Find(a);
	int y = Find(b);
	if (x != y)
		unf[x] = y;
}

vector<Edge> map;
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		unf[i] = i;
		cin >> s[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		map.push_back(Edge(a, b, c));
	}
	sort(map.begin(), map.end());
	for (int i = 0; i < m; i++)
	{
		int vt1 = Find(map[i].v1);
		int vt2 = Find(map[i].v2);
		int cost = map[i].val;
		if (vt1 != vt2 && s[map[i].v1] != s[map[i].v2])
		{
			visited[map[i].v1] = visited[map[i].v2] = true;
			ans += cost;
			Union(vt1, vt2);
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (visited[i] == false)
		{
			cout << -1;
			return 0;
		}
	}
	cout << ans;
	return 0;
}