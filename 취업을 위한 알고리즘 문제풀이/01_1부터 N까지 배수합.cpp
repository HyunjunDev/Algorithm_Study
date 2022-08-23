#include <iostream>
using namespace std;
int n, m, ans;
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		if (i % m == 0)
			ans += i;
	}
	cout << ans;
	return 0;
}