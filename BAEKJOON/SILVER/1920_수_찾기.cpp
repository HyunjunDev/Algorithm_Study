#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
#define endl '\n'
map<int, int> ms;
int n, m;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		ms.insert({ temp,0 });
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;
		if (ms.find(temp) != ms.end())
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}