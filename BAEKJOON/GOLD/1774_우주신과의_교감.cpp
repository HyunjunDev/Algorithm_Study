#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <math.h>
using namespace std;
int unf[5000];
int n, m, cnt, a, b, c;
double ans;
struct God
{
	int n, x, y;
	God(int a, int b, int c)
	{
		n = a;
		x = b;
		y = c;
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

double FindCost(int x1, int y1, int x2, int y2)
{
	double x = pow(abs(abs(x1) - abs(x2)), 2);
	double y = pow(abs(abs(y1) - abs(y2)), 2);
	return sqrt(x + y);
}

vector<God> god;
vector<tuple<double, int, int>> w;
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		unf[i] = i;
	}
	god.push_back(God(0, 0, 0));
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		god.push_back(God(i, a, b));
	}
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		Union(a, b);
	}
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			double cost = FindCost(god[i].x, god[i].y, god[j].x, god[j].y);
			w.emplace_back(cost, god[i].n, god[j].n);
		}
	}
	sort(w.begin(), w.end());
	for (int i = 0; i < w.size(); i++)
	{
		int v1 = Find(get<1>(w[i]));
		int v2 = Find(get<2>(w[i]));
		double cost = get<0>(w[i]);
		if (v1 != v2)
		{
			ans += cost;
			Union(v1, v2);
		}
	}
	printf("%.2f", ans);
	return 0;
}