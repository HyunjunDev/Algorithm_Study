#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, m, a, b, c, result;
int unf[1001];

struct Edge
{
	int v1;
	int v2;
	int val;
	Edge(int v1, int v2, int val)
	{
		this->v1 = v1;
		this->v2 = v2;
		this->val = val;
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
	int x = Find(unf[a]);
	int y = Find(unf[b]);
	if (a != b)
		unf[x] = y;
}

int main()
{
	vector<Edge> vec;
	cin >> n >> m;
	for (int i = 0; i <= n; i++)
		unf[i] = i;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		vec.push_back(Edge(a, b, c));
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < m; i++)
	{
		int x = vec[i].v1;
		int y = vec[i].v2;
		if (Find(y) != Find(x))
		{
			Union(x, y);
			result += vec[i].val;
		}
	}
	cout << result << endl;
	return 0;
}