#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int unf[100001];
int n, m, a, b, c, ans, lastVal;
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

int main()
{
	vector<Edge> vec;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		unf[i] = i;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		vec.push_back(Edge(a, b, c));
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < m; i++)
	{
		int x = Find(vec[i].v1);
		int y = Find(vec[i].v2);
		int z = vec[i].val;
		if (x != y)
		{
			Union(x, y);
			ans += z;
			lastVal = z;
		}
	}
	cout << ans - lastVal;
	return 0;
}