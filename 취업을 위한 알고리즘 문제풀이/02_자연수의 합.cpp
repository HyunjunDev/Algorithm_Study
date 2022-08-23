#include <iostream>
using namespace std;
int n, m, ans;
int main()
{
	cin >> n >> m;
	for (n; n <= m; n++)
	{
		cout << n;
		ans += n;
		if (n != m)
			cout << " + ";
	}
	cout << " = " << ans;
	return 0;
}