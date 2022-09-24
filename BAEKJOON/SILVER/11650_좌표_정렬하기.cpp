#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'
vector<pair<int, int>> vec;
int n;

bool compare(pair<int, int> a, pair<int, int> b)
{
	if (a.first > b.first)
		return false;
	else if (a.first < b.first)
		return true;
	else
	{
		if (a.second > b.second)
			return false;
		else
			return true;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		vec.push_back({ x,y });
	}
	sort(vec.begin(), vec.end(), compare);
	for (int i = 0; i < n; i++)
		cout << vec[i].first << ' ' << vec[i].second << endl;
	return 0;
}