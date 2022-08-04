#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
map<string, int> v;
int n, m, cnt;
string n1, m1[500001], ans[500001];
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> n1;
		v.insert({ n1, i });
	}
	for (int i = 0; i < m; i++)
		cin >> m1[i];

	for (int i = 0; i < m; i++)
	{
		if (v.find(m1[i]) != v.end())
			ans[cnt++] = m1[i];
	}

	cout << cnt << endl;
	sort(ans, ans + cnt);

	for (int i = 0; i < cnt; i++)
		cout << ans[i] << endl;

	return 0;
}
