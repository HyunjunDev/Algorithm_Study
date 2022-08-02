#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
string s;
vector<pair<int, int>> ans;
vector<string> res;
bool visit[201];

void func(int length)
{
	if (length == ans.size())
	{
		string temp;
		for (int i = 0; i < s.length(); i++)
		{
			if (visit[i])
				continue;
			temp += s[i];
		}
		if (temp != s)
			res.push_back(temp);
		return;
	}
	func(length + 1);
	visit[ans[length].first] = true;
	visit[ans[length].second] = true;
	func(length + 1);
	visit[ans[length].first] = false;
	visit[ans[length].second] = false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> s;
	vector<pair<char, int>> v;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(' || s[i] == ')')
			v.push_back({ s[i], i });
		if (v.size() >= 2 && v[v.size() - 2].first == '(' && v[v.size() - 1].first == ')')
		{
			ans.push_back({ v[v.size() - 2].second, v[v.size() - 1].second });
			v.pop_back();
			v.pop_back();
		}
	}
	func(0);
	sort(res.begin(), res.end());
	res.erase(unique(res.begin(), res.end()), res.end());

	for (int i = 0; i < res.size(); i++)
		cout << res[i] << endl;

	return 0;
}