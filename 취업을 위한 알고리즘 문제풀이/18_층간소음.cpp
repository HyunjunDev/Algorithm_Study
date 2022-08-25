#include <iostream>
using namespace std;
int n, m, cnt, imax = -1;
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		if (k > m)
		{
			cnt++;
			if (imax <= cnt)
				imax = cnt;
		}
		else
			cnt = 0;
	}
	cout << imax;
	return 0;
}