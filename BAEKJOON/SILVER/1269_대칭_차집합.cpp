#include <iostream>
#include <map>
using namespace std;
map<int, bool> m;
int n1, n2, input, cnt, ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n1 >> n2;
	for (int i = 0; i < n1; i++)
	{
		cin >> input;
		m.insert({ input,false });
	}
	for (int i = 0; i < n2; i++)
	{
		cin >> input;
		if (m.find(input) != m.end())
			cnt++;
	}
	ans = n1 - cnt + n2 - cnt;
	cout << ans;
	return 0;
}