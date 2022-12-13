#include <iostream>
using namespace std;
#define endl '\n'
int n, m;
int unf[1000001];
int Find(int v)
{
	if (unf[v] == v)
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
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i <= n; i++)
		unf[i] = i;
	for (int i = 0; i < m; i++)
	{
		int t, a, b;
		cin >> t >> a >> b;
		if (t == 0)
			Union(a, b);
		else
		{
			if (Find(a) == Find(b))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}