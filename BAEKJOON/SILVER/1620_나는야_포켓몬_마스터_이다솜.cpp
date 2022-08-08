#include <iostream>
#include <vector>
#include <map>
using namespace std;
map<string, int> m;
vector<string> v;
int n, k;
string s;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> s;
		v.push_back(s);
		m.insert({ s,i });
	}
	auto it = m.begin();
	for (int i = 0; i < k; i++)
	{
		cin >> s;
		if (s[0] - '0' >= 0 && s[0] - '0' <= 9)
		{
			int temp = 0;
			for (int j = s.length() - 1, h = 1; j >= 0; j--, h *= 10)
				temp += (s[j] - '0') * h;
			cout << v[temp - 1] << '\n';
		}
		else
		{
			if (m.find(s) != m.end())
				cout << m[s] << '\n';
		}
	}
	return 0;
}
