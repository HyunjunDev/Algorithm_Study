#include <iostream>
using namespace std;
int n, lt = 1205, rt, cur, k = 1, ans;
int main()
{
	cin >> n;
	while (lt != 0)
	{
		lt = n / (k * 10);
		cur = (n / k) % 10;
		rt = n % k;
		if (cur > 3)
			ans += (lt + 1) * k;
		else if (cur == 3)
			ans += (lt * k) + (rt + 1);
		else
			ans += lt * k;
		k *= 10;
	}
	cout << ans;
	return 0;
}