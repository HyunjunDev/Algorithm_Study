#include <iostream>
using namespace std;
int k, n, cnt;
int main()
{
	cin >> k >> n;
	while (k > 0)
	{
		if (k >= n)
			k -= (n - 1);
		else
			break;
		cnt++;
	}
	cout << cnt;
	return 0;
}