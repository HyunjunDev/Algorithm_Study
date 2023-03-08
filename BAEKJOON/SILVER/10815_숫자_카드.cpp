#include <iostream>
#include <set>
using namespace std;
int n, m, k;
set<int> s;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		s.insert(k);
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> k;
		if (s.find(k) != s.end())
			cout << 1 << ' ';
		else
			cout << 0 << ' ';
	}
	return 0;
}