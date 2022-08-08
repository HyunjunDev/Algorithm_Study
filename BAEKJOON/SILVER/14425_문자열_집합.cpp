#include <iostream>
#include <map>
using namespace std;
int n, k, ans;
map<string, bool> m;
int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		m.insert({ s,true });
	}
	for (int i = 0; i < k; i++)
	{
		string s;
		cin >> s;
		if (m.find(s) != m.end())
			ans++;
	}
	cout << ans;
	return 0;
}