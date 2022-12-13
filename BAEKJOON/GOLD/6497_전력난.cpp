#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#define endl '\n'
using namespace std;
int m, n, x, y, z, ans;
int unf[200010];

struct Edge
{
	int v1;
	int v2;
	int val;
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
	if (x < y)
		unf[y] = x;
	else
		unf[x] = y;
}

vector<Edge> vec;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while (1)
	{
		memset(unf, 0, sizeof(unf));
		vec.clear();
		ans = 0;
		cin >> m >> n;
		if (m == 0 && n == 0)
			break;
		for (int i = 0; i < m; i++)
			unf[i] = i;
		for (int i = 0; i < n; i++)
		{
			cin >> x >> y >> z;
			vec.push_back(Edge(x, y, z));
			ans += z;
		}
		sort(vec.begin(), vec.end());
		for (int i = 0; i < n; i++)
		{
			int v1 = Find(vec[i].v1);
			int v2 = Find(vec[i].v2);
			int cost = vec[i].val;
			if (v1 != v2)
			{
				Union(v1, v2);
				ans -= cost;
			}
		}
		cout << ans << endl;
	}
	return 0;
}