#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;
int n, k, cnt;

int main()
{
	cin >> n >> k;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	map <string, bool> m;
	do
	{
		string str = "";
		for (int i = 0; i < k; i++)
			str = str + to_string(vec[i]);
		if (m.find(str) == m.end())
		{
			m.insert({ str, true });
			cnt++;
		}
	} while (next_permutation(vec.begin(), vec.end()));
	cout << cnt;
	return 0;
}
