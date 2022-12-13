#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;
int n, a, b, c, ans;
int unf[100001];

vector<pair<int, int>> x, y, z;
vector<tuple<int, int, int>> info;
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

bool Compare(pair<int, int> a, pair<int, int> b)
{
	return a.second < b.second;
}

bool Compare2(tuple<int, int, int> a, tuple<int, int, int > b)
{
	return get<2>(a) < get<2>(b);
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		unf[i] = i;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		x.push_back({ i,a });
		y.push_back({ i,b });
		z.push_back({ i,c });
	}
	sort(x.begin(), x.end(), Compare);
	sort(y.begin(), y.end(), Compare);
	sort(z.begin(), z.end(), Compare);

	for (int i = 0; i < n - 1; i++)
	{
		info.emplace_back(x[i].first, x[i + 1].first, x[i + 1].second - x[i].second);
		info.emplace_back(y[i].first, y[i + 1].first, y[i + 1].second - y[i].second);
		info.emplace_back(z[i].first, z[i + 1].first, z[i + 1].second - z[i].second);
	}

	sort(info.begin(), info.end(), Compare2);
	for (int i = 0; i < info.size(); i++)
	{
		int p1 = Find(get<0>(info[i]));
		int p2 = Find(get<1>(info[i]));
		int cost = get<2>(info[i]);
		if (p1 != p2)
		{
			ans += cost;
			Union(p1, p2);
		}
	}
	cout << ans;
	return 0;
}