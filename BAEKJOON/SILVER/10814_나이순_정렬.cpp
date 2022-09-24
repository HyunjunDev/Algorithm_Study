#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;
vector<tuple<int, string, int>> vec;
int n;

bool compare(tuple<int, string, int> a, tuple<int, string, int> b)
{
	if (get<0>(a) > get<0>(b))
		return false;
	else if (get<0>(a) < get<0>(b))
		return true;
	else
	{
		if (get<2>(a) > get<2>(b))
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
		int age;
		string name;
		cin >> age >> name;
		vec.push_back({ age,name,i });
	}
	sort(vec.begin(), vec.end(), compare);
	for (int i = 0; i < n; i++)
		cout << get<0>(vec[i]) << ' ' << get<1>(vec[i]) << '\n';
	return 0;
}